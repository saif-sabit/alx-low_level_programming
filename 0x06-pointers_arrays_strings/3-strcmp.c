#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 0 if equals 15 if first string is greater -15 if second is
 */
int _strcmp(char *s1, char *s2)
{
	int c, i;

	i = 0;
	c = 0;

	while (1)
	{
		if ((s1[i] == s2[i]) && s1[i] == '\0')
		{
			c = 0;
			break;
		}
		else if (s1[i] == '\0')
		{
			c = -15;
			break;
		}
		else if (s2[i] == '\0')
		{
			c = 15;
			break;
		}
		i++;
	}
	return (c);
}
