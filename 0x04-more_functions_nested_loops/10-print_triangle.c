#include "main.h"

/**
 * print_triangle- prints triangle of #
 * @size: int type number
 */

void print_triangle(int size)
{
	int i;
	int j;
	int v;

	i = 0;
	j = 0;
	v = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (v = size - 1 - i; v > 0 ; v--)
				_putchar(' ');
			for (j = 0; j < i + 1; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
