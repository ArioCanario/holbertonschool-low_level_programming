#include "lists.h"
#include <stdio.h>
#include <unistd.h>

size_t print_list(const list_t *h)
{
	int i = 0;

	for (; h != NULL; h = h->next, i++)
	{
		if(h != NULL)
			printf("[%d] %s", h->len, h->str);
		else
		{
			printf("[0] (nil)");
		}
		printf("\n");
	}
	return(i);
}










/**
 * _strlen - returns the length of a string
 * @s: pinter to addres os strign
 *
 * Return: all elements of the stirng
 */
int _strlen(char *s)
{
        int count = 0;

        for (; s[count]; count++)
                ;
        return (count);
}

int _puts(char *str)
{
        return (write(1, str, _strlen(str)));
}
