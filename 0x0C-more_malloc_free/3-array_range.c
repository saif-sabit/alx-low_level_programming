#include <stdlib.h>
#include "main.h"
/**
 * array_range - allocates array for int numbers
 * @min: min value
 * @max: max value
 * Retrun: int array contains numbers from min to max include max & min
 */

int *array_range(int min, int max)
{
	int size;
	int *p;
	int i;

	i = 0;
	size = max - min + 1;
	if (min > max)
		return (NULL);
	p = malloc(size * sizeof(int));
	if (!p)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
