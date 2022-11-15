#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node to a list
 * Return: Pointer to head
 * @head: Pointer to the first node
 * @str: String
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *h = malloc(sizeof(list_t));

	if (!h)
	{
		return (NULL);
	}
	s = strdup(str);

	if (!s)
	{
		free(h);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = h;
		h->len = strlen(s);
		h->str = s;
		h->next = NULL;
		return (h);
	}
	h = *head;
	while (h->next)
	{
		h = h->next;
	}
	h->next = malloc(sizeof(list_t));
	h = h->next;
	h->len = strlen(s);
	h->str = s;
	h->next = NULL;

	return (h);
}
