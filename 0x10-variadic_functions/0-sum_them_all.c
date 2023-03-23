#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return sum of args
 * @n: size
 * Return: sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);
	sum = i = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
