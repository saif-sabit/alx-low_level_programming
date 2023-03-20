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

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
