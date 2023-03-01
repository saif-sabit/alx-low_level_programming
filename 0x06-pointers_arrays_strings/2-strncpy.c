#include "main.h"
/**
 * _strncpy - copies particular amount of string into another string pointer
 * @dest: char pointer type string
 * @src: char pointer type string
 * @n: unsigned int type number
 * Return - pointer of copied string
 */

char *_strncpy(char *dest, const char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return dest;
}
