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
	while (*s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);


}
