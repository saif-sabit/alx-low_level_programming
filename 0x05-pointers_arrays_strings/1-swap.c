#include "main.h"
/**
 * swap_int
 * @n @b : 'pointers to integer'
 * Description: 'swap two values'
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
