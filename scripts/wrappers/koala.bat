@echo off
"C:\msys64\ucrt64\bin\gcc.exe" -g "C:\Users\Dani\Documents\TechWriting\tests-c\koala.c" -o "C:\Users\Dani\Documents\TechWriting\tests-c\koala.exe"
if %ERRORLEVEL% NEQ 0 exit /b %ERRORLEVEL%
"C:\Users\Dani\Documents\TechWriting\tests-c\koala.exe"
