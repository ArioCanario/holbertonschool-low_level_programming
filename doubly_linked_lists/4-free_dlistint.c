#include "lists.h"

/**
 * free_dlist - Frees a list
 * Return: Nothing
 * @head: Head
 */

void free_dlist(dlistint_t *head)
{
	if (head)
	{
		free_dlist(head->next);
		free(head);
	}
}
