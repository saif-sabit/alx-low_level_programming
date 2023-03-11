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
	int i, n, sum;

	i = sum = n = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			n = atoi(argv[i]);
			if (n != 0)
			{
				sum += n;
			}
			else
			{
				printf("Error");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("%d\n", 0);
	return (0);
}
