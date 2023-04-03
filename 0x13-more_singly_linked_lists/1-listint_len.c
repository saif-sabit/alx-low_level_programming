#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - prints list contents
 * @h: pointer to a list
 * Return: size of printed list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
