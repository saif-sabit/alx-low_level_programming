#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for nmemb element
 * @nmemb: number of elements
 * @size: size of block
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (!p)
	{
		return (NULL);
	}
	return (p);
}
