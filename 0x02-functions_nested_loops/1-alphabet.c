#include "main.h"
/**
* Description :  ' prints letters from a to z'
* returns void
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
