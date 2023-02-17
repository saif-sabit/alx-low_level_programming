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
	for (m = n + 1; m < 10; m++)
	{
		for(i=n+1;i<10;i++)
		{
		putchar(n + '0');
		putchar(m + '0');
		putchar(i + '0');
		if (!((i == 7)&&(n == 8) && (m == 9)))
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
		n++;
	}
	putchar('\n');

	return (0);

}
