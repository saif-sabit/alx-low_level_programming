#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints a struct of dog
 * @d: pointer to adog struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		printf("name: %s\n", d->name);
		printf("age: %f\n", d->age);
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("owner: %s\n", d->owner);
	}
}
