#include <stdio.h>
#include "main.h"
/**
 * main- prints all args
 * @argc: number of command line args
 * @argv: the actual args
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;

	for (i = 0; i < argc, i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
