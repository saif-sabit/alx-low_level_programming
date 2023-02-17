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
	int m;

	while (n < 10)
	{
	for (m = n + 1; m < 10; m++)
	{
		putchar(n + '0');
		putchar(m + '0');
		if (!(n == m))
		{
			putchar(',');
			putchar(' ');
		}
		}
		n++;
	}
	putchar('\n');

	return (0);

}
