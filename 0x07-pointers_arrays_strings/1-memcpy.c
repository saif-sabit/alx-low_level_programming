#include "main.h"
/**
 * _memcpy- copies n number of string into another
 * @dest: pointer to string to be copied to
 * @src: pointer to string to be copied
 * @n: number of characters to be copied
 * Return: the pointer to modified string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
