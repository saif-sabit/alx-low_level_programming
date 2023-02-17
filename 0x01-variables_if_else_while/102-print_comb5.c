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
	int i;

	while (n < 10)
	{
	for (m = 0; m < 10; m++)
	{
		for (i = 0 ; i < 10; i++)
		{
			for(j =0; j<10; j++)
			{

			putchar(n + '0');
			putchar(m + '0');
			putchar(' ');
			putchar(i + '0');
			putchar(j + '0');
			if (!((((i == 9) && (n == 7)) && (m == 8))))
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
		n++;
	}
	putchar('\n');

	return (0);

}
