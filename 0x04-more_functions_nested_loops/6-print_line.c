#include "main.h"

/**
 * print_line- print line
 * @n: int type number
 * return nothing
*/

void print_line(int n)
{	int i;

	i = 0;

	if (n >= 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
