#include "dog.h"
#include "string.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

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
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (!d)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(sizeof(char) * (l1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (l2 + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
