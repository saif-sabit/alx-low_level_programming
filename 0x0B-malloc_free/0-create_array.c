#include "main.h"
/**
 * *create_array- creates array
 * @size: number considered size of array
 * @c: charto fill array with
 * Return: always return pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = (char*)0;
	i = 0;

	if (size < 1)
	{
		return (p);
	}
	else
	{
		p = (char*) malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
			p[i] = c;
		return (p);
	}
}
