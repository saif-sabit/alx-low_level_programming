#include "main.h"
#include <stddef.h>
/**
 * _strstr - checks string
 * @haystack: pointer to string.
 * @needle: pointer to string to be searched
 * Return: pointer to string from match point
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, f;

	char *m;

	m = haystack;
	i = j = f = 0;

	while (needle[i]  != '\0')
	{
		if (haystack[j] == '\0')
		{
			f = 0;
			break;
		}
		if (needle[i] == haystack[j])
		{
			i++;
			j++;
			f++;
		}
		else
		{
			j++;
			f = 0;
			i = 0;
		}
	}
	if (needle[0] == '\0')
		return (haystack);
	else if (f == 0)
		return (NULL);
	else
		return (m + j - f);
}
