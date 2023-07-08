#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table.
 * @ht: pointer of hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *new_ht;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				new_ht = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = new_ht;
			}
		}
	}
	free(head->array);
	free(head);
}
