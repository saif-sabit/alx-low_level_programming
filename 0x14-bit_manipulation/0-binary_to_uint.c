#include "main.h"
/**
 * binary_to_uint - returns decimal represnt of binary
 * @b: array of binary
 * Return: returned number
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int ret = 0;
	int i = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	for (n = 0; n < i; n++)
		ret += (b[i - 1 - n] - '0') * power(n);
	return (ret);
}
/**
 * power- return power of number
 * @n: number to raise two to
 * Return: returned value
 */
int power(int n)
{
	int result = 0;

	if (n == 0)
		return (1);
	result = 2 * power(n - 1);
	return (result);
}

