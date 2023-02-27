#include "main.h"
/**
 * puts_half - prints half of the string
 * @str : char type string
 * RErturns :nothing
 */
void puts_half(char *str)
{
	int i;
	int j;

	i = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		j = i / 2;
		for ( ; j < i; j++)
			_putchar(str[j]);
	}
	else
	{
		j = (i - 1) / 2;
		for ( ; j < i; j++)
			_putchar(str[j + 1]);
	}
	_putchar('\n');

}
