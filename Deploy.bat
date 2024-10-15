@echo off
echo Deploying MagicRename...

REM Change directory to where your Qt is installed (adjust the path to your Qt version)
cd "C:\Qt\6.8.0\mingw_64\bin"

REM Run windeployqt on your executable
windeployqt "C:\Users\Sossz\Documents\MagicRename\build\Desktop_Qt_6_8_0_MinGW_64_bit-Release\MagicRename.exe"

echo Deployment completed!
pause
