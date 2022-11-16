#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_listint - Prints values of a list
 * Return: Number of nodes
 * @h: Pointer to nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	for (; h != NULL; h = h->next, i++)
	{
		printf("%d", h->n);
		printf("\n");
	}
	return (i);
}
