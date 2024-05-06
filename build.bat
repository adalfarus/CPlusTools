@echo off
python setup.py build_ext --inplace
python setup.py install
python setup.py bdist_wheel
pause
