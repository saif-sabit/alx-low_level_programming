#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main- prints your name
 * @argc: number of command line args
 * @argv: the actual args
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
