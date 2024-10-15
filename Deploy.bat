@echo off
echo Deploying MagicRename...

REM Change directory to where your Qt is installed (adjust the path to your Qt version)
cd "C:\Qt\6.8.0\mingw_64\bin"

REM Run windeployqt on your executable
windeployqt "C:\Users\Sossz\Documents\MagicRename\build\MagicRenameV0\MagicRename.exe"

echo Deployment completed!
pause
