#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes a node
 * Return: Data of the deleted node
 * @head: Head of the list
 */

int pop_listint(listint_t **head)
{
	int s = 0;
	listint_t *temp = *head;

	if (head)
	{
		s = (*head)->n;
		*head = (*head)->next;
		free(temp);
	}
	return (s);
}
