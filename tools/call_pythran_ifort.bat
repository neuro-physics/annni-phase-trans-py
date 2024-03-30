@echo off
if not exist run ( mkdir run )

@call "%IFORT_COMPILER19%\bin\ipsxe-comp-vars.bat" intel64 vs2019
