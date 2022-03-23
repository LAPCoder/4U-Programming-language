#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define VERSION "0.1.0"

void clearTerminalByOSType()
{
	// check the OS
	// Windows (both 32 and 64 bits)
	#ifdef _WIN32
		system("cls");
	#endif

	// Unix (Linux etc...)
	// dosen't work on MacOS
	#ifdef __unix__
		system("clear");
	#endif

	// MacOS
	#ifdef __APPLE__
		system("clear");
	#endif

	//Unknow OS
	#if !defined _WIN32 && !defined __unix__ && !defined __APPLE__
		printf("\033[2J\033[3J");
	#endif
}

void displayHelp()
{
	clearTerminalByOSType();

	printf("\n\t\033[0;34m 4U : All the commands\033[0;37m\n\n--help / -H   Displays the commands\n");
	printf("--version / -V  Displays the version of the 4U compiler.");
	system("pause>nul");
}

void displayVersion()
{
	printf("Version of 4U : %s\n", VERSION);
}

void displayMsgNoArgs()
{
	printf("\n\t\033[0;35m No arguments found, compilation terminated\n\n\033[0;37m");
}
