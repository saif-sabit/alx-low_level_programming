#include "main.h"
/**
 * get_bit- gits but at particular index
 * @n: length
 * @index: index of bit to be retrived
 * Return: needed bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ret;

	if (index > 64)
		return (-1);

	ret = n >> index;

	return (ret & 1);
}
