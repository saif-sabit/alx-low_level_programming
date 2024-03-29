#include "hash_tables.h"

/**
 * hash_table_print - print hash table.
 * @ht: pointer of hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma == 0)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma = 0;
		}
	}
	printf("}\n");
}
