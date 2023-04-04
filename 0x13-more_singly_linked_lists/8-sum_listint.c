#include "lists.h"
/**
 * sum_listint- returns sum of ns if nodes
 * @head: pointer to linkedlist
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
	return (0);
	while (head)
	{
		i += head->n;
		head = head->next;
		i++;
	}
	return (i);
}
