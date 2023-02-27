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

	while (1)
	{
		dest[i] = src[i];

		i++;
		if (src[i] == '\0' || src[i] == null)
			break;
	}

	return (dest);
}

