#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_dlistint - Prints values of a list
 * Return: Number of nodes
 * @h: Pointer to nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	for (; h != NULL; h = h->next, i++)
	{
		if (h->n)
			printf("%d", h->n);
		else
			printf("0");
		printf("\n");
	}
	return (i);
}
