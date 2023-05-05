/**
 * clear_bit- clears bit at index
 * @n: pointer to length
 * @index: index of needed bit
 * Return: 1 on success -1 and -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--)
		p *= 2;
	*n -= p;
	return (1);
}

