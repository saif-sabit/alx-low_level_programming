#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - iterator
 * @array: pointer to int array
 * @size: unsigned int for size
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
