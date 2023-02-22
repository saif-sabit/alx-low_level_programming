#include "main.h"
/**
 * _islower checks ifd letter is uppercase
 * accepts @paraqmeter c is a character
 * Return: Always void
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
