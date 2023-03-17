#include <stdio.h>
#include <stdlib.h>
/**
 * is_number - detects if digit is number
 * @p: pointer to string
 * Return: 1 if it is all number or 0 if there is a char
 */

int is_number(char *p)
{
	unsigned int i;

	i = 0;
	while (p[i] != '\0')
	{
		if (!(p[i] > 47 && p[i] < 58))
			return (1);
		i++;
	}
	return (0);
}
/**
 * main- entry point
 * @argc: no of args
 * @argv: array for args
 * Return: 0 in successful execution
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if (is_number(argv[1]) == 1 || is_number(argv[2]) == 1)
		{
			printf("Error\n");
			exit(98);
		}
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
