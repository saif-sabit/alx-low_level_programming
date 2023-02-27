#include "main.h"
/**
 * print_rev - print reverse string
 * @s: char type string
 * Returns nothing
 */
void print_rev(char *s)
{
	count i;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
