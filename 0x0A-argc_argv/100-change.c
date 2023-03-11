#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * change- prints all args
 * @i: number of command line args
 * Return: always return 0
 */
int change(int i)
{
	if (i == 0)
	{
		return (0);
	}
	if (i >= 10)
	{
		return (1 + change(i - 10));
	}
	else if (i >= 25)
	{
		return (1 + change(i - 25));
	}
	else if (i >= 10)
	{
		return (1 + change(i - 10));
	}
	else if (i >= 1)
	{
		return (1 + change(i - 1));
	}
	else
	{
		return (1);
	}


}

/**
 * main- prints all args
 * @argc: number of command line args
 * @argv: the actual args
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	int n;

	n = 0;
	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n >= 0)
		{
			printf("%d\n", change(n));
			return (0);
		}
		else
		{
			printf("%d\n", 0);
			return (0);
		}
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
