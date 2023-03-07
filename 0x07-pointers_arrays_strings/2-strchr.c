#include "main.h"
#include <stddef.h>
/**
 * _strchr - detects particular char in string
 * @s: pointer to string
 * @c: character to be searched
 * Return: string starting from first accurance of letter c
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *n;

	n = s;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		n++;
		i++;
	}
	if (n[i] == '\0')
		return (NULL);
	else
		return (n);
}
