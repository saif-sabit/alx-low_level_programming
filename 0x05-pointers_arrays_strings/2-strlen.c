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

	count = 0;
	while (s[count] != '\0')
	{
		count++;

	}
	return (count);


}
