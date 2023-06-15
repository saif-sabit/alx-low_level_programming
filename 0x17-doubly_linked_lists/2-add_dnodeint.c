#include "lists.h"
/**
 * add_dnodeint - add node to list
 * @head: pointer to list
 * @n: number to set ad data
 * Return: pointer to added node or null if not added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ret;
	ret = malloc(sizeof(dlist_t) * 1);
	if (ret)
	{
		ret->prev =  NULL;
		ret->n = n;
		ret->next = head;
		return (ret);
	}
	else
	{
		return (NULL);
	}

}
