#include "main.h"
/**
 * factorial - prints factorial of n
 * @n: int to print factorial to
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 1)
		return (1);
	return (n * factorial(n - 1));
}
