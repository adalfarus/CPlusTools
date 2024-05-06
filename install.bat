@echo off
for %%F in (dist\*.egg) do (
    py -m pip install "%%F" --force-reinstall
)
pause
