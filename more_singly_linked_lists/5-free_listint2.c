#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list and sets head to NULL
 * Return: Nothing
 * @head: Pointer to the first node of a list
 */


void free_listint2(listint_t **head)
{
	if (head)
	{
		free_listint(*head);
		*head = NULL;
	}
}

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
