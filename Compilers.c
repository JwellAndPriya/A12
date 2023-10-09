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
* File name: compilers.c
* Compiler: MS Visual Studio 2022
* Course: CST 8152 – Compilers, Lab Section: [011, 012]
* Assignment: A12, A22, A32.
* Date: May 01 2023
* Professor: Paulo Sousa
* Purpose: This file is the main program of Compilers Project
* Function list: main().
************************************************************
*/


#include <stdio.h>
#include <stdlib.h>

#ifndef COMPILERS_H_
#include "Compilers.h"
#endif

/*
 * ............................................................................
 * ADVICE 1:
 * Please check the "TODO" labels to develop your activity.
 *
 * ADVICE 2: This file must be updated according to each assignment
 * (see the progression: reader > scanner > parser).
 * ............................................................................
 */

/*
***********************************************************
* Function name: main
* Purpose: Main function
* Author: Paulo Sousa
* History/Versions: Ver F22
* Called functions: mainReader(), mainScanner(), mainParser()
* Parameters: Command line arguments - argc, argv
* Return value: Status
* Algorithm: -
*************************************************************
*/

int32 main(int argc, char** argv) {
	int32 i;
	printLogo();
	if (DEBUG) {
		for (i = 0; i < argc; ++i)
			printf("argv[%d] = %s\n", i, argv[i]);
	}
	if (argc < 2) {
		printf("%s%c%s%c%s%c%s", "OPTIONS:\n* [",
			PGM_READER, "] - Reader\n* [",
			PGM_SCANNER, "] - Scanner\n* [",
			PGM_PARSER, "] - Parser\n");
		return EXIT_FAILURE;
	}
	char option = argv[1][0];
	switch (option) {
	case PGM_READER:
		printf("%s%c%s", "\n[Option '", PGM_READER, "': Starting READER .....]\n\n");
		mainReader(argc, argv);
		break;
	/* TO_DO: Include later SCANNER (A22) and PARSER (A32) */
	default:
		printf("%s%c%s%c%s%c%s", "* OPTIONS:\n- [",
			PGM_READER, "] - Reader\n- [",
			PGM_SCANNER, "] - Scanner\n- [",
			PGM_PARSER, "] - Parser\n");
		break;
	}
	return EXIT_SUCCESS;
}

/*
***********************************************************
* Function name: printLogo
* Purpose: Print Logo
* Author: Paulo Sousa
* History/Versions: Ver S23
* Called functions: -
* Parameters: -
* Return value: (Null)
* Algorithm: -
*************************************************************
*/

/* TO_DO: Update your logo with your own language message */

void printLogo() {
	printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
		"\t=-------------------------------------------------------=\n",
		"\t|          COMPILERS - ALGONQUIN COLLEGE (F23)			|\n",
		"\t=-------------------------------------------------------=\n",
		"\t|  MMMMMMMMMMMMMMMMMMMMMMMWWWWMMMMMMMMMMMMWMMMMMMMMMM	|\n",
		"\t|  MMMMMMMMMMMMMMMNKkdlc::::::::cldkKNMMMMWMMMMMMMMMM	|\n",
		"\t|  MMMMMMMMMMMMNkl:::ldxkO0000Okxdl:::lONMMMMMMMMMMMM	|\n",
		"\t|  MMMMMMMMMMNk;,o0NWMMMMMMMMMMMMMMWNOo,;kWMMMMMMMMMM	|\n",
		"\t|  MMMMMMMMMNl.cXMMMMMMMMMMMMMMMMMMMMMMXc.oNMMMMMMMMM	|\n",
		"\t|  MMMMMMMMWo.lNWMMMMMMMMMMMMMMMMMMMMMMWNl.dWMMMMMMMM	|\n",
		"\t|  MMMMMMMMK;,xlkWMMMMMMMMMMMMMMMMMMMWMOco,;XMMMMMMMM	|\n",
		"\t|  MMMMMMMM0,:o.cWMMMMMMMMMMMMMMMMMMMWWo.c;'0MMMMMMMM	|\n",
		"\t|  MMMMMMMMN:'o,,KMMMMMMMMMMMMMMMMMMMWK;'d,;KMMMMMMMM	|\n",
		"\t|  MMMMMMMMMk.;:.dN0kxddkNMMMMNkoddk0Nx.;:.xWMMMMMMMM	|\n",
		"\t|  MMMMMMMMMWd. .lc.     dMMMMd.    .co..'xWMMMMMMMMM	|\n",
		"\t|  MMMNkoxXMMNx.,k:     ,0MMWM0,     ;O;.xWMWKdoxNMMM	|\n",
		"\t|  MMWd.,,'kWMO.:NKc. .lKXOkOOXXl. .:0Wc.kMWx',;.oWMM	|\n",
		"\t|  MWk',0Kc':xx''OMWKOKWXc.;:':XWKOKNW0,.dx:'cK0,'kNM	|\n",
		"\t|  Wd.,dO00Odc;. .;lxKWMk..::..kMWKxl;. .,cdO000x,.dW	|\n",
		"\t|  WO:::::::lxkkd;.  .oNKod00doKWd.  .;dkkdc::::::cOW	|\n",
		"\t|  MMMWNWWXOoc;;cl' .''oO0OOO0OOo'.. .c:;;:oOXWWNWMMM	|\n",
		"\t|  MMMMMMWWMMWNOd:..,;,',,;;,,,,,,;,..:dONWWMMWMMMMMM	|\n",
		"\t|  MMMMMMMMMWWXko:..lo,''',,,,''',ol..;lkKWMMMMMMMMMM	|\n",
		"\t|  MMMW0occlc:;;lxl.,O0kddooooodkKO,.lxl:;:cl:co0WMMM	|\n",
		"\t|  MMMNc ,oddkOkd:;;,'cx0XNNNNX0kc',;,:okOkddd;.:XMMM	|\n",
		"\t|  MMMMKl'cKXo;;cxKWNkl::ccccc:::lONWKxc,,lKXl.c0WMMM	|\n",
		"\t|  MMMMMNl.c;'dNMWMMMMMWNXXXXKXNWMMMMMMMNx';l.:NMMMMM	|\n",
		"\t|  MMMMMMKl;l0WMMMMMMMMMMMMMMMMMMMMMMMMMMW0o:c0MMMMMM	|\n",
		"\t=-------------------------------------------------------=\n"
	);
}
