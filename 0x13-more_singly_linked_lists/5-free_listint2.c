#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - fres linkedlist
 * @head: pointer to head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *tmp;

	if (head ==NULL)
		;
	else
	{
		temp = (*head);

		while (temp)
		{
			tmp = temp;
			temp = temp->next;
			free(tmp);
		}
		*head = NULL;
	}

}
