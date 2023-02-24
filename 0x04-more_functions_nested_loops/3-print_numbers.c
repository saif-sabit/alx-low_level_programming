#include "main.h"
/**
 * void print_numbers prints numbers from 0 to 9
 * has no param
 * returns nothing
*/
void print_numbers(void)
{
    int i;
    i = 0;

    for(i = 0; i < 10; i++)
    {
        _putchar(i + '0');
    }
    _putchar('\n');

}
