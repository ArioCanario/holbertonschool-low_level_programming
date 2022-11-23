#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node to a list
 * Return: Pointer to head
 * @head: Pointer to the first node
 * @n: Number
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int s = n;
	dlistint_t *h = malloc(sizeof(dlistint_t)), *c;

	if (!h)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = h;
		h->n = s;
		h->next = NULL;
		h->prev = NULL;
		return (h);
	}
	h = *head;
	while (h->next)
	{
		h = h->next;
	}
	h->next = malloc(sizeof(dlistint_t));
	c = h;
	h = h->next;
	h->n = s;
	h->next = NULL;
	h->prev = c;

	return (h);
}
