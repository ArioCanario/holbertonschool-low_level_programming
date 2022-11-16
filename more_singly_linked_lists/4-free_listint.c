#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list
 * Return: Nothing
 * @head: Pointer to the first node of a list
 */


void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}

