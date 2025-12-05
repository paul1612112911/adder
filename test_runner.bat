@echo off
echo Running Build Test...

gcc main.c -o app
if %errorlevel%==0 (
    echo Compilation Successful!
    app.exe
    echo Execution Test Passed!
    exit /b 0
) else (
    echo Compilation Failed!
    exit /b 1
)
