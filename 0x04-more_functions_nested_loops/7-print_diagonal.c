#include "main.h"

/**
 * print_diagonal- prints diagonal
 * return nothing
 * @n: int type number
*/
void print_diagonal(int n)
{
	int i;
	int v;

	i = 0;
	v = 0;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			for (v = n - 1 - i; v > 0; v--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
