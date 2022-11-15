#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * list_len - Prints nodes of a list
 * Return: Number of nodes
 * @h: Pointer to nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	for (; h != NULL; h = h->next, i++)
	{
	}
	return (i);
}
