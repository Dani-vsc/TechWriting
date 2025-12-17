#!/usr/bin/env pwsh
# Scans the workspace for .c files and creates a <basename>.bat in the workspace root
# The generated .bat will compile the .c to its .exe path and then run the .exe.

$workspace = Resolve-Path "$PSScriptRoot\.."
$msysgcc = "C:\msys64\ucrt64\bin\gcc.exe"

# Output directory for generated wrappers (keeps workspace root clean)
$wrappersDir = Join-Path $workspace.Path 'scripts\\wrappers'
if (-not (Test-Path $wrappersDir)) { New-Item -Path $wrappersDir -ItemType Directory | Out-Null }

Write-Host "Workspace root: $($workspace.Path)"
Write-Host "Using GCC: $msysgcc"

Get-ChildItem -Path $workspace -Recurse -Filter *.c | ForEach-Object {
    $cPath = $_.FullName
    $exePath = [System.IO.Path]::ChangeExtension($cPath, '.exe')
    $batName = $_.BaseName + '.bat'
    $batPath = Join-Path $wrappersDir $batName

    $line1 = '@echo off'
    $line2 = '"' + $msysgcc + '" -g "' + $cPath + '" -o "' + $exePath + '"'
    $line3 = 'if %ERRORLEVEL% NEQ 0 exit /b %ERRORLEVEL%'
    $line4 = '"' + $exePath + '"'

    $lines = @($line1, $line2, $line3, $line4)
    $lines | Set-Content -Path $batPath -Encoding ASCII

    Write-Host "Created wrapper: $batPath"
}

Write-Host "Done. Generated wrappers for all .c files found."
