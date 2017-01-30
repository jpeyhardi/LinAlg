echo ON

set SCONS_MSCOMMON_DEBUG=-
scons py --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --arch=%ARCH%
if errorlevel 1 exit 1
python setup.py install
if errorlevel 1 exit 1

echo OFF