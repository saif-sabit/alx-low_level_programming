#include "lists.h"
/**
 * dlistint_len - prints list size
 * @h: pointer to a doubbly list
 * Return: size of printed list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
