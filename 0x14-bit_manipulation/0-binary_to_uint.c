#include <math.h>
/**
 * binary_to_uint- changes from binary to decimal
 * @b: pointer to string of bits
 * Return: unsigned int represent decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0;
	int n;
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	for (n = 0; n < i; n++)
		ret += (b[i - 1 - n] - '0') *  pow(2, n);
	return (ret);
}
