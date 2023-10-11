#include "search_algos.h"

/**
 * exponential_search - Searches for a value in an array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: index of element or -1
*/
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1, low, high, mid, i;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	low = bound / 2;
	if (bound < (int)size)
		high = bound;
	else
		high = (int)size - 1;
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
