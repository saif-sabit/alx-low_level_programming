#include "main.h"
/**
 * _strncat - concatenates two strings takes n char of src
 * @dest: pointer to char
 * @src: pointer to char also
 * @n: int type number
 * Return: dest pointer type char
 */

char *_strncat(char *dest, char *src, int n)
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
