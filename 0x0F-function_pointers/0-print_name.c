#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: pointer to the name
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
