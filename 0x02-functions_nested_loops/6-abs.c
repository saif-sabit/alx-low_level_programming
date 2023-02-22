#include "main.h"
/**
 * _abs - Return abso;ute value of int
 * @c: int type
 *Return: absolute value of number
 */
int _abs(int c)
{
	if (c < 0)
		return (-1 * c);
	else
		return (c);
}
