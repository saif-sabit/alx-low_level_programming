#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: charf pointer for string
 * Return: pointer to duplicated string or null if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, j, k, size;

	i = j = size = 0;
	p = (char *) '0';
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	i++;
	while ( s2[j] != '\0')
		j++;
	size = i + j;
	p = (char *) malloc(size * sizeof(char));
	if (p)
	{
		for (k = 0; k < size; k++)
		{
			if (k < i)
			{
				p[k] = s1[k];
			}
			else
			{
				p[k] = s2[k - i];
			}
		}
		p[k] = '\0';
		return (p);
	}
	else
	{
		return (NULL);
	}
}
