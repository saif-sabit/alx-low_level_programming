#include "main.h"
/**
 * cap_string - Capitaize
 * @s: pointer to char string
 * Return: pointer to string after capitalize
 */
char *cap_string(char *s)
{
	char a[] = { ',', ';', ' ', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i, j, k;

	i = 0;
	j = 0;
	k = -1;

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (k == -1 && s[i] > 96 & s[i] < 123)
				s[i] = s[i] - 32;
			else if (s[i] == a[j] || s[i] == 9 || s[i] == 10)
				if (s[i + 1] > 96 && s[i + 1] < 123)
				{
					s[i + 1] = s[i + 1] - 32;
					break;
				}
		}
		k = 0;
		i++;
	}
	return (s);
}
