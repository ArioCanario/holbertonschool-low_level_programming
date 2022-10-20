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

	str = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	if (size < 1)
	{
		return (NULL);
	}
	if (str[0] == '\0')
	{
		return (NULL);
	}
	return (str);
}
