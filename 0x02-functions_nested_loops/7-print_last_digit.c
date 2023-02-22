#include "main.h"
/**
 * print_last_digit - Return last digit
 * @c: int type
 *Return: last digit
 */
int print_last_digit(int c)
{
	while(c > 9)
	{
		c = c % 10;
	}
	_putchar('c');
	return (c);
}
