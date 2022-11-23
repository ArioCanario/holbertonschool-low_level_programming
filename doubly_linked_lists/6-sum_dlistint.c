#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - Sums all the values of a list
 * Return: Result
 * @head: Pointer to head
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	for (; head; head = head->next)
	{
		i += head->n;
	}
	return (i);
}
