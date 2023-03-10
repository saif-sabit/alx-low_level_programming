#include <stdio.h>
#include "main.h"
/**
 * main- prints number of args
 * @argc: number of command line args
 * @argv: the actual args
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
