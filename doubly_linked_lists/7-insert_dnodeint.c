#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a node in a index
 * Return: value of the node o nsucces, NULL if it fails
 * @h: Head of the list
 * @idx: Index
 * @n: value to save in the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *hn = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;

	hn->n = n;

	if (*h == NULL)
	{
		*h = hn;
		hn->next = hn->prev = NULL;
		return (hn);
	}
	else if (idx == 0)
	{
		add_dnodeint(h, n);
		return (hn);
	}
	while ((tmp->next != NULL) && (idx > i + 1))
	{
		tmp = tmp->next;
		i++;
	}
	if ((tmp->next == NULL) && (idx > i))
		return (NULL);
	else if (tmp->next == NULL)
	{
		add_dnodeint_end(h, n);
		return (hn);
	}
	hn->next = tmp->next;
	hn->prev = tmp->next->prev;
	tmp->next->prev = hn;
	tmp->next = hn;
	return (hn);
}
