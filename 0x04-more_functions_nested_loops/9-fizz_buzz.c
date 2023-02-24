#include <stdio.h>

/**
 * _fizzBuzz
 * returns nothing
*/
void _fizzBuzz(void)
{
    int i;
    i = 0;

    for (i = 1; i < 101; i++)
    {
        if (i % 3 == 0 && i % 5 ==0)
        {
            printf("FizzBuzz ");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz ");
        }
        else if (i % 5 == 0)
        {
            if(i != 100)
            printf("Buzz ");
            else
            printf("Buzz\n");

        }
        else
        {
            printf("%d ",i);
        }
    }
}
/**
 * main
 * returns always 0
*/
int main () {
    _fizzBuzz();
    return (0);
}
