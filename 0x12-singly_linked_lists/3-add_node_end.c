#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *ret_list;
	size_t len = 0;
	temp =(*head);
	while (str[len])
		len++;
	ret_list = malloc(sizeof(list_t));
	if (!ret_list)
	{
		return NULL;
	}
	ret_list->str = strdup(str);
	ret_list->len = len;
	ret_list->next = NULL;
	if (*head == NULL)
	{
		*head = ret_list;
		return (ret_list);
	}
	while (temp->next)
	{
		temp = temp->next;
		
	}
	temp->next = ret_list;

	return (ret_list);
}
