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
	listint_t *mylist;
	listint_t *temp = *head;
	unsigned int i = 0;

	mylist = malloc(sizeof(listint_t));
	if (!mylist)
	{
		return (NULL);
	}
		if (!head)
	{
		return (NULL);
	}
	mylist->n = n;
	mylist->next = NULL;
	if (idx == 0)
	{
		mylist->next = (*head);
		(*head) = mylist;
		return (mylist);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			mylist->next = temp->next;
			temp->next = mylist;
			return (mylist);
		}
		else
		temp = temp->next;
	}
	return (NULL);
}
