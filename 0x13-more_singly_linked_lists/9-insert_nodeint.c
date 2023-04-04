#include "lists.h"
/**
 * insert_nodeint_at_index - Adds node into given position
 * @head: pointer to linkedlist
 * @idx: given index
 * @n: int number to populate node
 * Return: pointer to added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *retlis;
	unsigned int i = 0;

	retlis = malloc(sizeof(listint_t));
	if (!retlis)
	return (NULL);
	while ((*head))
	{
		if (idx == i)
		{
			retlis->n = n;
			retlis->next = (*head)->next;
			(*head)->next = retlis;
			return (retlis);

		}
		(*head) = (*head)->next;
		i++;
	}
	free(retlis);
	return (NULL);
}
