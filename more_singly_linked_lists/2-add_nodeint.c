#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node to a list
 * Return: Pointer to head
 * @head: Pointer to the first node
 * @n: Number
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	int s = n;
	listint_t *h = malloc(sizeof(listint_t));

	if (!h)
	{
		return (NULL);
	}

	h->n = s;
	h->next = *head;
	*head = h;
	return (h);
}
