#include "lists.h"
/**
 * sum_dlistint - calculates the sum of data of list
 * @head: pointer to list
 * Return: sum of datat of nudes or 0 when empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (!head)
		return (0);
	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
