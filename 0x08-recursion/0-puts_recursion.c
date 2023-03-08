#include "main.h"
/**
 * _puts_recursion - prints string recursivey
 * @s: pointer to string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(s[0]);
	s++;
	_puts_recursion(s);

}
