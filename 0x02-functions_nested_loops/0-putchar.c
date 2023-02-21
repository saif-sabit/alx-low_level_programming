#include "main.h"
/*
 *
 *Description method main print _putchar
 *always return 0
*/
/* this is the starting point of program*/
int main(void)
{
	int i = 0;
	char str[] = "_putchar";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

