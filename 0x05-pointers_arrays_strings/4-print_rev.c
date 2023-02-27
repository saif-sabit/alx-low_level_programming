#include "main.h"
/**
 * print_rev - print reverse string
 * @s: char type string
 * Returns nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
