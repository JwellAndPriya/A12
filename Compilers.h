/*
************************************************************
* COMPILERS COURSE - Algonquin College
* Code version: Fall, 2023
* Author: TO_DO
* Professors: Paulo Sousa
************************************************************
=-------------------------------------------------------=
|          COMPILERS - ALGONQUIN COLLEGE (F23)			|
=-------------------------------------------------------=
|  MMMMMMMMMMMMMMMMMMMMMMMWWWWMMMMMMMMMMMMWMMMMMMMMMM	|
|  MMMMMMMMMMMMMMMNKkdlc::::::::cldkKNMMMMWMMMMMMMMMM	|
|  MMMMMMMMMMMMNkl:::ldxkO0000Okxdl:::lONMMMMMMMMMMMM	|
|  MMMMMMMMMMNk;,o0NWMMMMMMMMMMMMMMWNOo,;kWMMMMMMMMMM	|
|  MMMMMMMMMNl.cXMMMMMMMMMMMMMMMMMMMMMMXc.oNMMMMMMMMM	|
|  MMMMMMMMWo.lNWMMMMMMMMMMMMMMMMMMMMMMWNl.dWMMMMMMMM	|
|  MMMMMMMMK;,xlkWMMMMMMMMMMMMMMMMMMMWMOco,;XMMMMMMMM	|
|  MMMMMMMM0,:o.cWMMMMMMMMMMMMMMMMMMMWWo.c;'0MMMMMMMM	|
|  MMMMMMMMN:'o,,KMMMMMMMMMMMMMMMMMMMWK;'d,;KMMMMMMMM	|
|  MMMMMMMMMk.;:.dN0kxddkNMMMMNkoddk0Nx.;:.xWMMMMMMMM	|
|  MMMMMMMMMWd. .lc.     dMMMMd.    .co..'xWMMMMMMMMM	|
|  MMMNkoxXMMNx.,k:     ,0MMWM0,     ;O;.xWMWKdoxNMMM	|
|  MMWd.,,'kWMO.:NKc. .lKXOkOOXXl. .:0Wc.kMWx',;.oWMM	|
|  MWk',0Kc':xx''OMWKOKWXc.;:':XWKOKNW0,.dx:'cK0,'kNM	|
|  Wd.,dO00Odc;. .;lxKWMk..::..kMWKxl;. .,cdO000x,.dW	|
|  WO:::::::lxkkd;.  .oNKod00doKWd.  .;dkkdc::::::cOW	|
|  MMMWNWWXOoc;;cl' .''oO0OOO0OOo'.. .c:;;:oOXWWNWMMM	|
|  MMMMMMWWMMWNOd:..,;,',,;;,,,,,,;,..:dONWWMMWMMMMMM	|
|  MMMMMMMMMWWXko:..lo,''',,,,''',ol..;lkKWMMMMMMMMMM	|
|  MMMW0occlc:;;lxl.,O0kddooooodkKO,.lxl:;:cl:co0WMMM	|
|  MMMNc ,oddkOkd:;;,'cx0XNNNNX0kc',;,:okOkddd;.:XMMM	|
|  MMMMKl'cKXo;;cxKWNkl::ccccc:::lONWKxc,,lKXl.c0WMMM	|
|  MMMMMNl.c;'dNMWMMMMMWNXXXXKXNWMMMMMMMNx';l.:NMMMMM	|
|  MMMMMMKl;l0WMMMMMMMMMMMMMMMMMMMMMMMMMMW0o:c0MMMMMM	|
|  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM	|
|  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM	|
|		 ____        __             _ _		__  __		|
|		|  _ \  ___ / _| __ _ _   _| | |_	\ \/ /		|
|		| | | |/ _ \ |_ / _` | | | | | __|	 \  /		|
|		| |_| |  __/  _| (_| | |_| | | |_	 /  \		|
|		|____/ \___|_|  \__,_|\__,_|_|\__/	/_/\_\		|
|														|
=-------------------------------------------------------=
*/
/*
************************************************************
* File name: Compilers.h
* Compiler: MS Visual Studio 2022
* Course: CST 8152 – Compilers, Lab Section: [011, 012]
* Assignment: A12, A22, A32.
* Date: May 01 2023
* Professor: Paulo Sousa
* Purpose: This file defines the functions called by main function.
* Function list: mainReader(), mainScanner(), mainParser().
*************************************************************/

#ifndef COMPILERS_H_
#define COMPILERS_H_

#define DEBUG 0

/*
 * ............................................................................
 * ADVICE 1:
 * Please check the "TODO" labels to develop your activity.
 *
 * ADVICE 2: This file must be updated according to each assignment
 * (see the progression: reader > scanner > parser).
 * ............................................................................
 */

/* TO_DO: Adjust your language (cannot be "Sofia") */

/* Language name */
#define STR_LANGNAME	"DefaultX"

/* Logical constants - adapt for your language */
#define True  1
#define False 0

/*
------------------------------------------------------------
Data types definitions
NOTE: Some types may not be directly used by your language,
		but they can be necessary for conversions.
------------------------------------------------------------
*/


/* TO_DO: Define your typedefs */
typedef char*			string;
typedef int				int32;
typedef float			float32;

typedef unsigned char	boolean;
typedef unsigned char	byte;



/*
------------------------------------------------------------
Programs:
1: Reader - invokes MainReader code
2: Scanner - invokes MainScanner code
3: Parser - invokes MainParser code
------------------------------------------------------------
*/
enum PROGRAMS {
	PGM_READER	= 'r',
	PGM_SCANNER = 's',
	PGM_PARSER	= 'p'
};

/*
------------------------------------------------------------
Main functions signatures
(Code will be updated during next assignments)
------------------------------------------------------------
*/
int32 mainReader(int32 argc, string* argv);

/* 
TO_DO: Include later mainScaner (A22) and mainParser (A32)
*/
void printLogo();

#endif
