#include "lists.h"
#include <stddef.h>
/**
 * list_len - prints list contents
 * @h: pointer to a single list
 * Return: size of list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
