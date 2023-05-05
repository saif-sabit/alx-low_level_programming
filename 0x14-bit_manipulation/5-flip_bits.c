#include "main.h"
/**
 * flip_bits- shows how many bit we need to flip
 * @n: length number 1
 * @m:length number 2
 * Retuern: numbers of bit to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int counter;

	d = n ^ m;
	counter = 0;

	while (d)
	{
		counter++;
		d &= (d - 1);
	}

	return (counter);
}

