#include "main.h"
/**
 *
 *
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (true)
	{
		dest[i] = src[i];

		i++;
		if (src[i] == '\0')
			break;
	}

	return (dest);
}

