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

	if (!hn)
	{
		return (NULL);
	}
	hn->n = n;

	if (idx == 0)
	{
		hn->next = *h;
		*h = hn;
		return (hn);
	}
	for (; tmp; tmp = tmp->next, i++)
	{
		if (i == idx - 1)
		{
			(tmp->next)->prev = hn;
			hn->next = tmp->next;
			hn->prev = tmp;
			tmp->next = hn;
		}
	}
	if (idx >= i)
		return (NULL);
	return (hn);
}
