#include "main.h"
#include <limits.h>
/**
 * malloc_checked - allocates memory
 * @b: size of memory to be allocated
 * Return: pointer to allocated area
 */
void *malloc_checked(unsigned int b)
{
	char *p;
	p = malloc(b);
	if (!p)
	{
		exit (98);
	}
	return (p);
}
