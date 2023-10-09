:: ---------------------------------------------------------------------
:: COMPILERS COURSE - SCRIPT                                           -
:: SCRIPT A12 - CST8152 - Fall 2023                                    -
:: ---------------------------------------------------------------------

CLS
SET COMPILER=DefaultX.exe

SET FILE1=EmptyFile
SET FILE2=HelloWorld
SET FILE3=Volume
SET FILE4=BigFile


SET ASSIGNMENT=A12
SET EXTENSION=dfx
SET OUTPUT=out
SET ERROR=err

SET PARAM=r

:: ---------------------------------------------------------------------
:: Begin of Tests (A12 - F23) ------------------------------------------
:: ---------------------------------------------------------------------

@echo off

ECHO "=-------------------------------------------------------="
ECHO "|          COMPILERS - ALGONQUIN COLLEGE (F23)		  |"
ECHO "=-------------------------------------------------------="
ECHO "|  MMMMMMMMMMMMMMMMMMMMMMMWWWWMMMMMMMMMMMMWMMMMMMMMMM	|"
ECHO "|  MMMMMMMMMMMMMMMNKkdlc::::::::cldkKNMMMMWMMMMMMMMMM	|"
ECHO "|  MMMMMMMMMMMMNkl:::ldxkO0000Okxdl:::lONMMMMMMMMMMMM	|"
ECHO "|  MMMMMMMMMMNk;,o0NWMMMMMMMMMMMMMMWNOo,;kWMMMMMMMMMM	|"
ECHO "|  MMMMMMMMMNl.cXMMMMMMMMMMMMMMMMMMMMMMXc.oNMMMMMMMMM	|"
ECHO "|  MMMMMMMMWo.lNWMMMMMMMMMMMMMMMMMMMMMMWNl.dWMMMMMMMM	|"
ECHO "|  MMMMMMMMK;,xlkWMMMMMMMMMMMMMMMMMMMWMOco,;XMMMMMMMM	|"
ECHO "|  MMMMMMMM0,:o.cWMMMMMMMMMMMMMMMMMMMWWo.c;'0MMMMMMMM	|"
ECHO "|  MMMMMMMMN:'o,,KMMMMMMMMMMMMMMMMMMMWK;'d,;KMMMMMMMM	|"
ECHO "|  MMMMMMMMMk.;:.dN0kxddkNMMMMNkoddk0Nx.;:.xWMMMMMMMM	|"
ECHO "|  MMMMMMMMMWd. .lc.     dMMMMd.    .co..'xWMMMMMMMMM	|"
ECHO "|  MMMNkoxXMMNx.,k:     ,0MMWM0,     ;O;.xWMWKdoxNMMM	|"
ECHO "|  MMWd.,,'kWMO.:NKc. .lKXOkOOXXl. .:0Wc.kMWx',;.oWMM	|"
ECHO "|  MWk',0Kc':xx''OMWKOKWXc.;:':XWKOKNW0,.dx:'cK0,'kNM	|"
ECHO "|  Wd.,dO00Odc;. .;lxKWMk..::..kMWKxl;. .,cdO000x,.dW	|"
ECHO "|  WO:::::::lxkkd;.  .oNKod00doKWd.  .;dkkdc::::::cOW	|"
ECHO "|  MMMWNWWXOoc;;cl' .''oO0OOO0OOo'.. .c:;;:oOXWWNWMMM	|"
ECHO "|  MMMMMMWWMMWNOd:..,;,',,;;,,,,,,;,..:dONWWMMWMMMMMM	|"
ECHO "|  MMMMMMMMMWWXko:..lo,''',,,,''',ol..;lkKWMMMMMMMMMM	|"
ECHO "|  MMMW0occlc:;;lxl.,O0kddooooodkKO,.lxl:;:cl:co0WMMM	|"
ECHO "|  MMMNc ,oddkOkd:;;,'cx0XNNNNX0kc',;,:okOkddd;.:XMMM	|"
ECHO "|  MMMMKl'cKXo;;cxKWNkl::ccccc:::lONWKxc,,lKXl.c0WMMM	|"
ECHO "|  MMMMMNl.c;'dNMWMMMMMWNXXXXKXNWMMMMMMMNx';l.:NMMMMM	|"
ECHO "|  MMMMMMKl;l0WMMMMMMMMMMMMMMMMMMMMMMMMMMW0o:c0MMMMMM	|"
ECHO "|  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM	|"
ECHO "|  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM	|"
ECHO "|		 ____        __             _ _		__  __		|"
ECHO "|		|  _ \  ___ / _| __ _ _   _| | |_	\ \/ /		|"
ECHO "|		| | | |/ _ \ |_ / _` | | | | | __|	 \  /		|"
ECHO "|		| |_| |  __/  _| (_| | |_| | | |_	 /  \		|"
ECHO "|		|____/ \___|_|  \__,_|\__,_|_|\__/	/_/\_\		|"
ECHO "|														|"
ECHO "=-------------------------------------------------------="


ren *.exe %COMPILER%

::
:: BASIC TESTS  ----------------------------------------------------------
::
:: Basic Tests (A12 - F23) - - - - - - - - - - - - - - - - - - - - - -

%COMPILER% %PARAM% %FILE1%.%EXTENSION%	> %FILE1%-%ASSIGNMENT%.%OUTPUT%	2> %FILE1%-%ASSIGNMENT%.%ERROR%
%COMPILER% %PARAM% %FILE2%.%EXTENSION%	> %FILE2%-%ASSIGNMENT%.%OUTPUT%	2> %FILE2%-%ASSIGNMENT%.%ERROR%
%COMPILER% %PARAM% %FILE3%.%EXTENSION%	> %FILE3%-%ASSIGNMENT%.%OUTPUT%	2> %FILE3%-%ASSIGNMENT%.%ERROR%

::
:: ADVANCED TESTS  -------------------------------------------------------
::
:: Advanced Tests (A12 - F23) - - - - - - - - -- - - - - - - - - - - -

%COMPILER% %PARAM% %FILE4%.%EXTENSION%	f 100 10	> %FILE7%-%ASSIGNMENT%-f-100-10.%OUTPUT%	2> %FILE7%-%ASSIGNMENT%-f-100-10.%ERROR%
%COMPILER% %PARAM% %FILE4%.%EXTENSION%	a 100 10	> %FILE7%-%ASSIGNMENT%-a-100-10.%OUTPUT%	2> %FILE7%-%ASSIGNMENT%-a-100-10.%ERROR%
%COMPILER% %PARAM% %FILE4%.%EXTENSION%	m 100 10	> %FILE7%-%ASSIGNMENT%-m-100-10.%OUTPUT%	2> %FILE7%-%ASSIGNMENT%-m-100-10.%ERROR%

:: SHOW OUTPUTS - - - - - - - - - - - - - - - - - - - - - - - - - - -
DIR *.OUT
DIR *.ERR

:: ---------------------------------------------------------------------
:: End of Tests (A12 - F23) --------------------------------------------
:: ---------------------------------------------------------------------
