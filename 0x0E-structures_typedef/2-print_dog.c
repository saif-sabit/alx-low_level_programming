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
			printf("(nil)\n");
		else
			printf("name: %s\n", d->name);
		printf("age: %f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("owner: %s", d->owner);
		printf("name: %s\nage: %f\nowner: %s\n", d->name, d->age, d->owner);
	}
}
