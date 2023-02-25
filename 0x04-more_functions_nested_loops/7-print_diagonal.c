#include "main.h"

/**
 * print_diagonal- prints diagonal
 * return nothing
 * @n: int type number
*/
void print_diagonal(int n)
{
	int i;

	i = 0;

	if (n >= 0)
		for (i = 0; i < n; i++)
			_putchar('\\');
	_putchar('\n');
}
