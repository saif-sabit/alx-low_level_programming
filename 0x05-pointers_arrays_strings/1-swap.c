#include "main.h"
/**
 * swap_int - swap values
 * @a: 'pointers to integer'
 * @b: 'pointer to int'
 * Description: 'swap two values'
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
