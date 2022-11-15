#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_list - Frees a list
  * Return: NOthing
  * @head: Head of the list
  */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
