#include "main.h"
/**
 * rev_string - print reverse string
 * @s: char type string
 * Returns nothing
 */
void rev_string(char *s)
{
	int count;
	int i;
	char temp;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count / 2; i++)
	{
		temp = s[i];
		s[i] = s[count - i - 1];
		s[count -  i - 1] = temp;
	}
}
