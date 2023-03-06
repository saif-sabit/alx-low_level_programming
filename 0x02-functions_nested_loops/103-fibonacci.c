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
	float current = 2;
	float prev = 1;
	float now = 0;
	double sum=0;

	for (i = 0; i < 400000; i++)
	{
		now = current + prev;
		if (now < 4000000)
		{
		sum += now;
		prev=current;
		current=now;
		}
		else
		{
			break;
		}
	}
	printf("%f",sum);
	return (0);
}
