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

list_t *add_node(list_t **head, const char *str)
{
	char *s = strdup(str);
	list_t *h = malloc(sizeof(list_t));

	if (h == NULL)
	{
		free(h);
		return (NULL);
	}

	h->len = strlen(s);
	h->str = s;
	h->next = *head;
	*head = h;
	free (h);
	free (s);
	return (h);
}
