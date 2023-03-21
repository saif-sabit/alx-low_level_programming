#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog struct item
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to struct of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n;
	char *a;

	if (name == NULL || owner == NULL)
		return (NULL);
	
	n = malloc(sizeof(name));
	a = malloc(sizeof(owner));
	d = malloc(sizeof(dog_t));
	d->name = n;
	d->age = age;
	d->owner = a;
	return (d);
}
