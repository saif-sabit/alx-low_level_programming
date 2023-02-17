#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - Entry point
 * Description: 'Program that prints positive or negative or zero using printf'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 16)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);

}
