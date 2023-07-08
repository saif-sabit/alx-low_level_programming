#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - create hash table.
 * @size: size of new hash table.
 *
 * Return: pointer to hash table or NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_t;
	unsigned long int i;

	hash_t = malloc(sizeof(shash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(shash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash_t->array[i] = NULL;
	hash_t->shead = NULL;
	hash_t->stail = NULL;

	return (hash_t);
}

/**
 * shash_table_set - add new item.
 * @ht: pointer to hash table.
 * @key: key.
 * @value: value of key.
 *
 * Return: 1 or 0 on failliar.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *hash_t, *tmp;
	char *val;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val = strdup(value);
	if (val == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = val;
			return (1);
		}
		tmp = tmp->snext;
	}

	hash_t = malloc(sizeof(shash_node_t));
	if (hash_t == NULL)
	{
		free(val);
		return (0);
	}
	hash_t->key = strdup(key);
	if (hash_t->key == NULL)
	{
		free(val);
		free(hash_t);
		return (0);
	}
	hash_t->value = val;
	hash_t->next = ht->array[index];
	ht->array[index] = hash_t;

	if (ht->shead == NULL)
	{
		hash_t->sprev = NULL;
		hash_t->snext = NULL;
		ht->shead = hash_t;
		ht->stail = hash_t;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		hash_t->sprev = NULL;
		hash_t->snext = ht->shead;
		ht->shead->sprev = hash_t;
		ht->shead = hash_t;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		hash_t->sprev = tmp;
		hash_t->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = hash_t;
		else
			tmp->snext->sprev = hash_t;
		tmp->snext = hash_t;
	}

	return (1);
}

/**
 * shash_table_get - get hash table.
 * @ht: pointer of hash table.
 * @key: key.
 *
 * Return: value or null.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - print hash table.
 * @ht: pointer of hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print in rev manner.
 * @ht: pointer of hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: pointer of hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
