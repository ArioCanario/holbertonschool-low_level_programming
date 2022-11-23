#include "lists.h"

/**
 * free_dlistint - Frees a list
 * Return: Nothing
 * @head: Head
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
