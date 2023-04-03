#include "lists.h"
#include <stdlib.h>
void free_listint2(listint_t **head)
{
	listint_t *temp ;
	listint_t *tmp;

	temp = (*head);
	while(temp)
	{
		tmp = temp;
		temp = temp->next;
		free(tmp);
	}
	*head = NULL;

}
