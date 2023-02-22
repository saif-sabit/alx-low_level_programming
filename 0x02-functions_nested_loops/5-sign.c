#include "main.h"
/**
 * print_sign - Return 1 if number is positive and 0 if zero and -1 if negative
 * @c: char type number
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(1);
		return ('+');
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}else
	{
	_putchar('0');
	return (0);
	}
}
