@echo off
echo Starting Cleanup...

REM Define the path to the build directory (change this to your actual build folder)
set buildDir=C:\Users\Sossz\Documents\MagicRename\build\MagicRenameV0

REM Delete unnecessary translation files
echo Removing unnecessary translations...
if exist "%buildDir%\translations" (
    del /Q "%buildDir%\translations\qt*.qm"
) else (
    echo No translation files found.
)

REM Keep only specific image format plugins (remove the rest)
echo Removing unused image formats...
if exist "%buildDir%\imageformats" (
    del /Q "%buildDir%\imageformats\qgif.dll"
    del /Q "%buildDir%\imageformats\qjpeg.dll"
    del /Q "%buildDir%\imageformats\qsvg.dll"
) else (
    echo No image formats found.
)

REM Remove unused network and SVG-related libraries
echo Removing unused libraries...
if exist "%buildDir%\Qt6Network.dll" (
    del /Q "%buildDir%\Qt6Network.dll"
) else (
    echo Qt6Network.dll not found.
)

if exist "%buildDir%\Qt6Svg.dll" (
    del /Q "%buildDir%\Qt6Svg.dll"
) else (
    echo Qt6Svg.dll not found.
)

REM Remove OpenGL and Direct3D libraries if not used
echo Removing OpenGL and D3D libraries...
if exist "%buildDir%\opengl32sw.dll" (
    del /Q "%buildDir%\opengl32sw.dll"
) else (
    echo opengl32sw.dll not found.
)

if exist "%buildDir%\D3Dcompiler_47.dll" (
    del /Q "%buildDir%\D3Dcompiler_47.dll"
) else (
    echo D3Dcompiler_47.dll not found.
)

REM Remove unused TLS plugins
echo Removing TLS plugins...
if exist "%buildDir%\tls" (
    del /Q "%buildDir%\tls\qcertonlybackend.dll"
    del /Q "%buildDir%\tls\qopensslbackend.dll"
    del /Q "%buildDir%\tls\qschannelbackend.dll"
) else (
    echo No TLS plugins found.
)

REM Compress DLL files with UPX (use the full path to UPX)
echo Compressing DLL files with UPX...
C:\upx\upx.exe --best --ultra-brute %buildDir%\*.dll

echo Cleanup and Size Reduction Completed!
pause
