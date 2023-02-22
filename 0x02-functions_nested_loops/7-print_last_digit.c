#include "main.h"
/**
 * print_last_digit - Return last digit
 * @c: int type
 *Return: last digit
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = -1 * c % 10;
		_putchar(c + '0');
		return (c);
	}
	else
	{
		c = c % 10;
		_putchar(c + '0');
		return (c);
	}
}
