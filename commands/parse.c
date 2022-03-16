#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "utils.h"

#ifndef MAX_BUF
#define MAX_BUF 255
#endif

void parse(int argc, char **argv)
{
	for(int i = 1; i < argc; i++) // i = 1 beacause the first arg is path
	{
		if(!strcmp(argv[i], "--help") || !strcmp(argv[i], "--H")) {
			displayHelp();
		} else if(!strcmp(argv[i], "--version") || !strcmp(argv[i], "-V")) {
			displayVersion();
		} else if(!strcmp(argv[i], "install-compiler")) {
			// installCompiler();
		} else if(argc - 1 == 0) {
			displayMsgNoArgs();
		} else {
			// print path
			printf("\n\n");

			char path[MAX_BUF], ch;

			getcwd(path, MAX_BUF);
			printf("Current directory is : %s\n", path);

			printf("\n\n");
			FILE* ftc; // File To Compile

			ftc = fopen(argv[i], "r");

			if(ftc == NULL)
			{
				perror("Error opening this file\n");
				exit(EXIT_FAILURE);
			}

			while((ch = fgetc(ftc)) != EOF)
			{
				printf("%c", ch);
			}
			fclose(ftc);
			printf("\n\n");
		}
	}
}