#include "main.h"
/**
 * _isdigit 
 * @c int type number
 * returns 1 if number is digit returns 0 else
*/
int _isdigit(int c) 
{
    if (c > 47 && c < 58)
        return (1);
    return (0);

}
