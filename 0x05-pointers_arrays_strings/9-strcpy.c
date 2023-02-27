#include "main.h"
/**
 * *_strcpy - copies string from source to destination
 * @dest : destination pointer
 * @src : source pointer
 * Returns: pointer of copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (1)
	{
		dest[i] = src[i];

		i++;
		if (src[i] == '\0' || src[i] == NUlL)
			break;
	}

	return (dest);
}

