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
	int s = n;
	dlistint_t *h = malloc(sizeof(dlistint_t));

	if (!h)
	{
		return (NULL);
	}
	h = *head
	h->n = s;
	h->next = *head;
	h->prev = NULL;
	*head = h;
	return (h);
}
