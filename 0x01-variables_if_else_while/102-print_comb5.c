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
	int j;

	while (n < 10)
	{
	for (m = 0; m < 10; m++)
	{
		for (i = 0 ; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{

			if (!((((i == 0) && (j == 0)) && ((m == 0) && (n == 0)))))
			{
			putchar(n + '0');
			putchar(m + '0');
			putchar(' ');
			putchar(i + '0');
			putchar(j + '0');
			if (!((((i == 9) && (j == 9)) && ((m == 9) && (n == 9)))))
			{
			putchar(',');
			putchar(' ');
			}
			}
			}
		}
	}
		n++;
	}
	putchar('\n');

	return (0);

}
