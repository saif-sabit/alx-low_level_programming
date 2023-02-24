#include "main.h"
/**
 * void print_most_numbers prints numbers from 0 to 9
 * dont print 2 and 4
 * returns nothing
*/
void print_most_numbers(void)
{
    int i;
    i = 0;

    for(i = 0; i < 10; i++)
    {
        if(i != 4 && i != 2)
        _putchar(i + '0');
    }
    _putchar('\n');

}
