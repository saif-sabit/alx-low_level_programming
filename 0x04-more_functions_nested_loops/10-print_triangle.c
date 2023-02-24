#include "main.h"
/**
 * print_triangle
 * @:size int type number
*/
void print_triangle(int size)
{
    int i;
    int j;
    i = 0;
    j = 0;

    if (size > 0)
    {
        for (i = 0; i <= size; i++)
        {
            for(j = 0; j < i; j++)
                _putchar('#');
            _putchar('\n');            
        }
    }
    else
    {
        _putchar('\n');
    }

}
