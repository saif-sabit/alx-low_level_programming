#include <stdio.h>
/**
 * main - entry point
 * program lists and sums  all the natural numbers below 10
 * that are multiples of 5 or 3
 * always return 0
 */
int main()
{
	int i;
	int sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d", sum);
	return (0);
}
