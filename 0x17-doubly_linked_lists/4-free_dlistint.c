#include "lists.h"
/**
 * free_dlistint _ frees list
 * @head: pointer to list
 */
void free_dlistint(dlistint_t *head)
{
	while(head)
	{
		free(head);
		head = head->next;
	}

}
