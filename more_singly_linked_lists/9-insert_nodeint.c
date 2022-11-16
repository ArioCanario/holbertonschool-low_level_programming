#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gives the value of a index node
 * Return: value of the node o nsucces, NULL if it fails
 * @head: Head of the list
 * @index: Index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *h = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!h)
	{
		return (NULL);
	}
	h->n = n;

	if (idx == 0)
	{
		h->next = *head;
		*head = h;
		return (h);
	}
	for (; tmp; tmp = tmp->next, i++)
	{
		if (i == idx - 1)
		{
			h->next = tmp->next;
			tmp->next = h;
		}
	}
	if (idx > i)
		return (NULL);
	return (h);
}
