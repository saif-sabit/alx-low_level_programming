#include <stdlib.h>
#include "main.h"
/**
 * _realloc - allocates memory
 * @ptr: pointer to previously allocated block
 * @old_size: size of previously allocated memory
 * @new_size: size of new memory block to be allocated
 * Return: void pointer to new allocated block of memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (!p)
		return (NULL);
	for (i = 0; i < old_size; i++)
	{
		p = ptr;
		p++;
		ptr++;
	}
	free(ptr);
	return (p);
}
