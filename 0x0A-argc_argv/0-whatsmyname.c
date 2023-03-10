#include <stdio.h>
#include "main.h"
/**
 * main- prints your name
 * @argc: number of command line args
 * @argv: the actual args
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
