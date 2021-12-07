@echo off
set /a i = 0
:begin
set /a i = i + 1
set /a sqr = i * i
set /a ost = %sqr% %% 1000
if %ost% equ 696 (goto end) else (goto begin)


:end
echo %i%