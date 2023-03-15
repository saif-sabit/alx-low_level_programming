#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * argstostr - prints args
 * @ac: int type number
 * @av: pointer to string args
 * Return: returns pointer to string
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	char *str;

	int i = 0, j = 0, size = 0, k = 0;

	while (av[i])
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		i++;
	}
	size = size + i;
	str = malloc(size * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	i = j = k = 0;
	while (av[i])
	{
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		j = 0;
		i++;
	}
	str[k] = '\0';
	return (str);
}
