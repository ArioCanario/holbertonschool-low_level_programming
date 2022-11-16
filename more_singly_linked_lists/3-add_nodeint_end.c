#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node to a list
 * Return: Pointer to head
 * @head: Pointer to the first node
 * @n: Number
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int s = n;
	listint_t *h = malloc(sizeof(listint_t));

	if (!h)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = h;
		h->n = s;
		h->next = NULL;
		return (h);
	}
	h = *head;
	while (h->next)
	{
		h = h->next;
	}
	h->next = malloc(sizeof(listint_t));
	h = h->next;
	h->n = s;
	h->next = NULL;

	return (h);
}
