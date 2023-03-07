#include "main.h"
/**
 * _strpbrk - search source string about occurance in s
 * @s: pointer to source string
 * @accept: pointer to value to be scanned from
 * Return: pointer to string from first occurance of s letters
 */
char *_strpbrk(char *s, char *accept)
{
	char *n;
	unsigned int i;
	unsigned int j;
	int f;

	n = s;

	i = f = j = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 1;
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		j = 0;
		n++;
		i++;
	}
	if (f == 0)
		return (NULL);
	else
		return (n);

}
