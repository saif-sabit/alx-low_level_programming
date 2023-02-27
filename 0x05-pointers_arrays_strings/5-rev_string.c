#include "main.h"
/**
 * rev_string - print reverse string
 * @s: char type string
 * Returns nothing
 */
void rev_string(char *s)
{
	int count;

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
}
