#include "lists.h"
/**
* pop_listint- prints the head node info
* @head: pointer to head pointer
* Return: number in the node
*/
int pop_listint(listint_t **head)
{
	if ((*head) == NULL)
		return (0);
	return ((*head)->n);
}
