#include "main.h"
/**
 * _pow_recursion - prints power of x to y
 * @x: number to be calculating power to
 * @y: number of power
 * Return: -1 if power is less than 0 or n power to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y < 1)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
