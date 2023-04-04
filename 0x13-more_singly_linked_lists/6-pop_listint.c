#include "lists.h"
/**
* pop_listint- prints the head node info
* @head: pointer to head pointer
* Return: number in the node
*/
int pop_listint(listint_t **head)
{
	int m;
	listint_t *temp;

	if (head == NULL)
		return (0);
	m = (*head)->n;
	temp = (*head);
	(*head) = (*head)->next;
	free (temp);
	return (m);
}
