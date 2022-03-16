#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define VERSION "0.1.0"

void displayHelp()
{
    system("cls");
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