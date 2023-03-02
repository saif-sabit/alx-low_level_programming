#include "main.h"
/**
 * reverse_array - takes an array of integer and reverse the order
 * @a: pointer to array of type int
 * @n: int number of elements
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;

	while (i < (n / 2))
	{
		temp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
