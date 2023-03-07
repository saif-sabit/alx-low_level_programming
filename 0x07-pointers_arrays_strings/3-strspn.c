#include "main.h"
/**
 * _strspn - prints number of letter of in accept in s
 * @s: pointer to string
 * @accept: pointer to string to be searched
 * Return: number of occurance of accept chars in c
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	unsigned int i;
	unsigned int j;

	n = i = j = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				n++;
			}
			j++;
		}
		j = 0;
		i++;
		if (s[i] == ',')
			break;
	}
	return (n);
}
