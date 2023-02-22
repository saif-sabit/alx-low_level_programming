#include "main.h"
/**
 * _islower checks if letter is lowercase
 * @c is a character
 * Return: Always 1 if it is lowercase else returns 1
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
