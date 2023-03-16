#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concats n number of s2 chars
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of chars to be concated
 * Return: pointer to result string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size, i, j;

	size = i = j = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	size = i + n + 1;
	p = malloc(size * sizeof(char));
	if (!p)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		p[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		p[j] = s2[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);
}
