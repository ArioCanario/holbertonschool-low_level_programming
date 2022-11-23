#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * dlistint_len - Prints values of a list
 * Return: Number of nodes
 * @h: Pointer to nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	for (; h != NULL; h = h->next, i++)
	{
	}
	return (i);
}
