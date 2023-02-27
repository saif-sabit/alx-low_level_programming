#include "main.h"
/**
 * _strlen - 'count the length of string'
 * @s: 'char type'
 * Return: 'length'
 *
 */
int _strlen(char *s)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);


}
