#include "main.h"
/**
 * *_strcpy - copies string from source to destination
 * @dest : destination pointer
 * @src : source pointer
 * Return: pointer of copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (1)
	{
		dest[i] = src[i];
		if (dest[i] == '\0')
			break;
		i++;
	}

	return (dest);
}
