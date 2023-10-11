#include <math.h>
#include "search_algos.h"
/**
 * jump_search - Searches for a value in an array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: index of element or -1
*/

int jump_search(int *array, size_t size, int value)
{
	int jump = (int)sqrt(size);
	int left = 0, right = 0, i;

	if (array == NULL || size == 0)
		return (-1);

	while (right < (int)size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	for (i = left; i <= right && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
