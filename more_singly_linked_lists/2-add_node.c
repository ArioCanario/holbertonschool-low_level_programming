#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node to a list
 * Return: Pointer to head
 * @head: Pointer to the first node
 * @str: String
 */

list_t *add_nodeint(list_t **head, const int n)
{
	int s;
	list_t *h = malloc(sizeof(list_t));

	if (!h)
	{
		return (NULL);
	}

	h->n = s;
	h->next = *head;
	*head = h;
	return (h);
}
