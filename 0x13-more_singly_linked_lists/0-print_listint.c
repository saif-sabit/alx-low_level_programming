#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - prints list contents
 * @h: pointer to a list
 * Return: size of printed list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
