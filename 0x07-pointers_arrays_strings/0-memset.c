#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer type char
 * @b: pointer type char
 * @n: unsigned int number
 * Return: pointer to memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	j = 0;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return(s);
}
