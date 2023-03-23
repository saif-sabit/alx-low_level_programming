#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints arguments passed
 * @separator: pointer to separator
 * @n: number of args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
			if(separator == NULL || i + 1 == n)
				printf("%d",va_arg(args,int));
			else
				printf("%d%s",va_arg(args,int), separator);
	}
	printf("\n");

}
