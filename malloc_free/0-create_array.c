#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Allocates an array in the memory
 * Return: Null if malloc fails, str if malloc success
 * @size: Size of the array
 * @c: characters of the array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size < 1)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
