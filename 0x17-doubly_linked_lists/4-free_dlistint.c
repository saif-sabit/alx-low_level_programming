#include "lists.h"
/**
 * free_dlistint - frees lists
 * @head: pointer to list
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}

}
