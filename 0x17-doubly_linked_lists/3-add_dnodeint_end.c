#include "lists.h"
/**
 * add_dnodeint_end - add node to end of list
 * @head: pointer to list
 * @n: number to set ad data
 * Return: pointer to added node or null if not added
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ret;
	dlistint_t *temp;

	temp = (*head);
	ret = malloc(sizeof(dlistint_t));
	if (ret)
	{
		ret->n = n;
		ret->prev = (*head);
		ret->next = NULL;
	}
	if (*head == NULL)
	{
		*head = ret;
		return (ret);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = ret;
	return (ret);



}
