#include "main.h"
/**
 * leet - encodes letters to numbers
 * @s: pointer type char for string to be encoded
 * Return: pointer to encoded String
 */

char *leet(char *s)
{
	char b[] = {'4', '3', '0', '7', '1'};
	char a[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int i;
	int j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
			if (s[i] == a[j])
				s[i] = b[j / 2];
		i++;
	}
	return (s);
}
