#include "main.h"
/**
 * rot13 - shifts char by 13
 * @s: pointer
 * Return: pointer to encryoted text
 */

char *rot13(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] > 96 && s[i] < 123))
			s[i] = ((s[i] - 'a' + 13) % 26) + 'a';
		else if (s[i] > 64 && s[i] < 91)
			s[i] = ((s[i] - 'A' + 13) % 26) + 'A';
		i++;
	}
}
