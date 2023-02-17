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
			putchar(n / 10 + '0');
			putchar(n / 10 + '0');
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m / 10+ '0');
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
