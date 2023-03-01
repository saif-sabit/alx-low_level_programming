#include "main.h"
#include <stdio.h>

/*
 * main: Entry point
 * Return: always 0
 */
int main()
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;
	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);
	return (0);
}
