#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - adds node at the beginig of list
 * @head: pointer to head pointer
 * @str: string in pointer
 * Return: pointer to added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ret_list;
	size_t len = 0;

	while (str[len])
		len++;
	ret_list = malloc(sizeof(list_t));
	if (!ret_list)
	{
		return (NULL);
	}
	ret_list->str = strdup(str);
	ret_list->len = len;
	ret_list->next = (*head);
	(*head) = ret_list;
	return (*head);
}
