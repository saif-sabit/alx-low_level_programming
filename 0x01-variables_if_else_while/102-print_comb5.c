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


	while (n < 98)
	{
	for (m = 0; m < 99; m++)
	{
			putchar(n + '0');
			putchar(m + '0');
			putchar(' ');
			putchar(i + '0');
			putchar(j + '0');
			if (!((n == 98) && (m == 99)))
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
