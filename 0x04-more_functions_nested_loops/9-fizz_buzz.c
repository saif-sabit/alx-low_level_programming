#include <stdio.h>

/**
 * _fizzBuzz- prints numbers from 1 to 100
 * when no is duvuded by 3 writes fizz whan no divided by 5 writes buzz
*/

void _fizzBuzz(void)
{
	int i;

	i = 0;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i != 100)
				printf("Buzz ");
			else
				printf("Buzz\n");
		}
		else
		{
			printf("%d ", i);
		}
	}
}

/**
 * main- checks function
 * return: always 0
*/

int main(void)
{
	_fizzBuzz();
	return (0);

}
