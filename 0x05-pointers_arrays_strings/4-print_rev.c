#include "main.h"
/**
 * print_rev - print reverse string
 * @s: char type string
 * Returns nothing
 */
void print_rev(char *s)
{
	int i;
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		_putchar(s[i]);
		count--;
	}
	_putchar('\n');
}
