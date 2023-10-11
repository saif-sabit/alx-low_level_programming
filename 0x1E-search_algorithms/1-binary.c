#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of integers.
 * @array: Pointer to the array.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: index of element or -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		size_t i, mid;

		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
