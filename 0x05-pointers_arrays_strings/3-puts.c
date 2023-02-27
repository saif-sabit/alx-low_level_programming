#include "main.h"
/**
 * _puts- display string
 * @str : char type string
 *return: nothing
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

}
