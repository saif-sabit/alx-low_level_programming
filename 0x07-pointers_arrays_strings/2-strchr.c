#include "main.h"
/**
 * _strchr - detects particular char in string
 * @s: pointer to string
 * @c: character to be searched
 * Return: string starting from first accurance of letter c
 */
char *_strchr(char *s, char c)
{
	int i;
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
	if (n == s)
		return (NULL);
	return (n);
}
