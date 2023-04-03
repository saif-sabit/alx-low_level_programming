#include "lists.h"
/**
 * add_nodeint - adds node at the beginig of list
 * @head: pointer to head pointer
 * @n: int type number
 * Return: pointer to added node or NULL if allocation failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ret_list;

	ret_list = malloc(sizeof(listint_t));
	if (!ret_list)
	{
		return (NULL);
	}
	ret_list->n = n;
	ret_list->next = (*head);
	(*head) = ret_list;
	return (*head);
}
