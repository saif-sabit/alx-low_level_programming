#include "hash_tables.h"

/**
 * hash_table_set - Add - update hash table.
 * @ht: pointer of hash table.
 * @key: key to add.
 * @value: value of the key.
 *
 * Return: 0 or -1 on failliar.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_t;
	char *val;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val = strdup(value);
	if (val == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
	}

	hash_t = malloc(sizeof(hash_node_t));
	if (hash_t == NULL)
	{
		free(val);
		return (0);
	}
	hash_t->key = strdup(key);
	if (hash_t->key == NULL)
	{
		free(hash_t);
		return (0);
	}
	hash_t->value = val;
	hash_t->next = ht->array[index];
	ht->array[index] = hash_t;

	return (1);
}