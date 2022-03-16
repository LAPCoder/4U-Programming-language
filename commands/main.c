#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "utils.h"

#ifndef MAX_BUF
#define MAX_BUF 255
#endif

int main(int argc, char **argv)
{
	printf("DEBUG Number of args: %d \n", argc - 1);

	parse(argc, argv); // defined in parse.c

	return 0;
}