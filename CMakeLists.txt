#
# CMakeList.txt : CMake project for Compilers, include source and define project specific logic here.
#

#=-------------------------------------------------------=
#|          COMPILERS - ALGONQUIN COLLEGE (F23)			|
#=-------------------------------------------------------=
#|  MMMMMMMMMMMMMMMMMMMMMMMWWWWMMMMMMMMMMMMWMMMMMMMMMM	|
#|  MMMMMMMMMMMMMMMNKkdlc::::::::cldkKNMMMMWMMMMMMMMMM	|
#|  MMMMMMMMMMMMNkl:::ldxkO0000Okxdl:::lONMMMMMMMMMMMM	|
#|  MMMMMMMMMMNk;,o0NWMMMMMMMMMMMMMMWNOo,;kWMMMMMMMMMM	|
#|  MMMMMMMMMNl.cXMMMMMMMMMMMMMMMMMMMMMMXc.oNMMMMMMMMM	|
#|  MMMMMMMMWo.lNWMMMMMMMMMMMMMMMMMMMMMMWNl.dWMMMMMMMM	|
#|  MMMMMMMMK;,xlkWMMMMMMMMMMMMMMMMMMMWMOco,;XMMMMMMMM	|
#|  MMMMMMMM0,:o.cWMMMMMMMMMMMMMMMMMMMWWo.c;'0MMMMMMMM	|
#|  MMMMMMMMN:'o,,KMMMMMMMMMMMMMMMMMMMWK;'d,;KMMMMMMMM	|
#|  MMMMMMMMMk.;:.dN0kxddkNMMMMNkoddk0Nx.;:.xWMMMMMMMM	|
#|  MMMMMMMMMWd. .lc.     dMMMMd.    .co..'xWMMMMMMMMM	|
#|  MMMNkoxXMMNx.,k:     ,0MMWM0,     ;O;.xWMWKdoxNMMM	|
#|  MMWd.,,'kWMO.:NKc. .lKXOkOOXXl. .:0Wc.kMWx',;.oWMM	|
#|  MWk',0Kc':xx''OMWKOKWXc.;:':XWKOKNW0,.dx:'cK0,'kNM	|
#|  Wd.,dO00Odc;. .;lxKWMk..::..kMWKxl;. .,cdO000x,.dW	|
#|  WO:::::::lxkkd;.  .oNKod00doKWd.  .;dkkdc::::::cOW	|
#|  MMMWNWWXOoc;;cl' .''oO0OOO0OOo'.. .c:;;:oOXWWNWMMM	|
#|  MMMMMMWWMMWNOd:..,;,',,;;,,,,,,;,..:dONWWMMWMMMMMM	|
#|  MMMMMMMMMWWXko:..lo,''',,,,''',ol..;lkKWMMMMMMMMMM	|
#|  MMMW0occlc:;;lxl.,O0kddooooodkKO,.lxl:;:cl:co0WMMM	|
#|  MMMNc ,oddkOkd:;;,'cx0XNNNNX0kc',;,:okOkddd;.:XMMM	|
#|  MMMMKl'cKXo;;cxKWNkl::ccccc:::lONWKxc,,lKXl.c0WMMM	|
#|  MMMMMNl.c;'dNMWMMMMMWNXXXXKXNWMMMMMMMNx';l.:NMMMMM	|
#|  MMMMMMKl;l0WMMMMMMMMMMMMMMMMMMMMMMMMMMW0o:c0MMMMMM	|
#|  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM	|
#|  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM	|
#|		 ____        __             _ _		__  __		|
#|		|  _ \  ___ / _| __ _ _   _| | |_	\ \/ /		|
#|		| | | |/ _ \ |_ / _` | | | | | __|	 \  /		|
#|		| |_| |  __/  _| (_| | |_| | | |_	 /  \		|
#|		|____/ \___|_|  \__,_|\__,_|_|\__/	/_/\_\		|
#|														|
#=-------------------------------------------------------=

cmake_minimum_required (VERSION 3.8)


# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("DefaultX")


# Add source to this project's executable: check name and dependences
add_executable (DefaultX
	"Compilers.h"	"Compilers.c"
	"Reader.h"		"Reader.c"		"MainReader.c"
	#"Scanner.h"		"Scanner.c"		"MainScanner.c"
	#"Parser.h"		"Parser.c"		"MainParser.c"
	# TO_DO: Add A22 (Scanner) and A32 (Parser)
)


# TO_DO: Add tests and install targets if needed.
