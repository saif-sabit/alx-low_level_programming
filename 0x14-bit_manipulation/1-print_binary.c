#include "main.h"
/**
 * print_binary- prints binary equivalant of number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned int val;
	int i;

	val = n;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; (val >>= 1) > 0; i++)
		;
	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		i--;
	}
}

