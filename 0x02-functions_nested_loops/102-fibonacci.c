#include <stdio.h>
/**
 * main - entry point
 * program
 *
 * Return: always return 0
 */
int main(void)
{
	int i = 0;
	long int arr[50];

	arr[0] = 1;
	arr[1] = 2;

	printf("%ld, %ld, ", arr[0], arr[1]);
	for (i = 0; i < 48; i++)
	{
		arr[i + 2] = arr[i] + arr[i + 1];
		if (i == 47)
		{
		printf("%ld", arr[i + 2]);
		}
		else
		{
		printf("%ld, ", arr[i + 2]);
		}
	}
	return (0);
}
