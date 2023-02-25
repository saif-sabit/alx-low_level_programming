#include "main.h"
/**
 * _isupper - checks if char is upper
 * @c: int type number
 * Return: 0 if not upper else return 1
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
