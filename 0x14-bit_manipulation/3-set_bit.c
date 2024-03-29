/**
 *set_bit- sets bit in index
 * @n: pointer to length
 * @index: index of needed bit
 * Return: 1 on success -1 and -1 if index over 64
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--)
		p *= 2;
	*n += p;
	return (1);
}

