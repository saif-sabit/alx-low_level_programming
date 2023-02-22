#include "main.h"
/**
 *int _islower(int c)
 *Description :prints letters from a to z times
 * Return: Always void
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
