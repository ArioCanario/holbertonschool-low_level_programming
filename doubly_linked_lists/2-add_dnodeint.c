#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node to a list
 * Return: Pointer to head
 * @head: Pointer to the first node
 * @n: NUmber
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = malloc(sizeof(dlistint_t));

	if (h == NULL)
	{
		return (NULL);
	}
	h->next = *head;
	*head = h;
	h->prev = NULL;
	h->n = n;
	if (h->next != NULL)
		h->next->prev = h;
	return (h);
}
