@echo off
"C:\msys64\ucrt64\bin\gcc.exe" -g "C:\Users\Dani\Documents\TechWriting\tests-c\test-1.c" -o "C:\Users\Dani\Documents\TechWriting\tests-c\test-1.exe"
if %ERRORLEVEL% NEQ 0 exit /b %ERRORLEVEL%
"C:\Users\Dani\Documents\TechWriting\tests-c\test-1.exe"
