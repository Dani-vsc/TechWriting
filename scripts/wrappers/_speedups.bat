@echo off
"C:\msys64\ucrt64\bin\gcc.exe" -g "C:\Users\Dani\Documents\TechWriting\.venv\Lib\site-packages\markupsafe\_speedups.c" -o "C:\Users\Dani\Documents\TechWriting\.venv\Lib\site-packages\markupsafe\_speedups.exe"
if %ERRORLEVEL% NEQ 0 exit /b %ERRORLEVEL%
"C:\Users\Dani\Documents\TechWriting\.venv\Lib\site-packages\markupsafe\_speedups.exe"
