@cd /d %~dp0

:Accept
@i-accept-my-fate.exe
@echo.
@echo Press any key to get another one.
@echo.

@pause >nul 2>nul
@cls & @goto Accept