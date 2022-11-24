#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Inserts a node in a index
 * Return: 1 on succes, -1 if it fails
 * @head: Head of the list
 * @index: Index
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head, *rm;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		rm = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(rm);
		return (1);
	}
	for (; tmp; tmp = tmp->next)
	{
		i++;
	}
	if (index > i)
		return (-1);
	tmp = *head;
	for (i = 0; i < index - 1; i++)
	{
		tmp = tmp->next;
	}
	rm = tmp->next;
	if (tmp->next->next == NULL)
		tmp->next = NULL;
	else
	{
		tmp->next = tmp->next->next;
		tmp->next->prev = tmp;
	}
	free(rm);
	return (1);

}
