#include "main.h"
/**
 * rot13 - shifts char by 13
 * @s: pointer
 * Return: pointer to encryoted text
 */

char *rot13(char *s)
{
	int i, j;
	char []letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
	count++;
	}
	return (s);
}
