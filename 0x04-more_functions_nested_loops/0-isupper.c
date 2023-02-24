#include "main.h"
/**
*_isupper 
*@c: int type number
*always return 0 if not upper else return 1
*/
int _isupper(int c)
{
    if(c > 64 && c < 91)
    return(1);
    else
    return (0);
}
