#include <stdio.h>
/**
 * main - entry point
 * program lists and sums  all the natural numbers below 10
 * that are multiples of 5 or 3
 * Return: always return 0
 */
int main(void)
{
	int i = 0;
	long int arr[50];

	arr[0] = 1;
	arr[1] = 2;

	printf("%ld, %ld, ",arr[0],arr[1]);
	for (i=0; i < 48; i++)
	{
		arr[i + 2] = arr[i] + arr[i + 1];
		printf("%ld, ",arr[i + 2]);
	}
	return (0);
}
