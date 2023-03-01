#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char also
 * Return: dest pointer type char
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = j = 0;

	while (src[i] != '\0')
	{
		while (1)
		{
			if (dest[j] == '\0')
			{
				dest[j] = src[i];
				dest[j + 1] = '\0';
				j = 0;
				break;
			}
			j++;
		}
		i++;
	}
	return (dest);
}
