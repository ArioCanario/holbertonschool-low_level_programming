#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_list - Prints values of a list
 * Return: Number of nodes
 * @h: Pointer to nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	for (; h != NULL; h = h->next, i++)
	{
		if (h->str != NULL)
			printf("[%d] %s", h->len, h->str);
		else
		{
			printf("[0] (nil)");
		}
		printf("\n");
	}
	return (i);
}
