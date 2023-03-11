#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main- prints all args
 * @argc: number of command line args
 * @argv: the actual args
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
