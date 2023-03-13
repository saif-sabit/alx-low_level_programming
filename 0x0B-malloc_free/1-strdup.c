#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: charf pointer for string
 * Return: pointer to duplicated string or null if fails
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i, size;

	i = 0;
	p = (char *) '0';

	if (str == NULL || str[i] == '\0')
	{
		return (NULL);
	}
	while (str[i] != '\0')
		i++;
	size = i;
	p = (char *)malloc(size * sizeof(char));
	if (p)
	{
		for (i = 0; i <= size; i++)
			p[i] = str[i];
		return (p);
	}
	else
	{
		return (NULL);
	}
}
