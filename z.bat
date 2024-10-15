@echo off
echo Zipping the build folder...

REM Define the path to the build directory and the version file
set buildDir=C:\Users\Sossz\Documents\MagicRename\build\MagicRenameV0
set versionFile=C:\Users\Sossz\Documents\MagicRename\version_count.txt

REM Check if version file exists, if not create it and start from version 1
if not exist %versionFile% (
    echo 1 > %versionFile%
)

REM Read the current version number from the file
set /p currentVersion=<%versionFile%

REM Define the zip file name with the current version (remove any extra spaces)
set zipFile=C:\Users\Sossz\Documents\MagicRename\build\MagicRenameV0.%currentVersion%.zip

REM Make sure the paths are quoted to handle spaces
powershell -Command "Compress-Archive -Path '%buildDir%\*' -DestinationPath '%zipFile%'"

REM Check if the previous command was successful
if %ERRORLEVEL% neq 0 (
    echo Error: Zipping the build folder failed. Version number will not be incremented.
    pause
    exit /b 1
)

REM Increment the version number and save it back to the version file
set /a newVersion=%currentVersion%+1
echo %newVersion% > %versionFile%

echo Build zipped successfully: %zipFile%
pause
