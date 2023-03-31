#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
