#include "hash_tables.h"

/**
 * hash_djb2 - djb2 algorithm method.
 * @str: The string to hash.
 *
 * Return: returned hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int c;

	hash_value = 5381;
	while ((c = *str++))
		hash_value = ((hash_value << 5) + hash_value) + c; /* hash * 33 + c */

	return (hash_value);
}
