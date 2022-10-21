#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Alocates memory and set it in 0
 * Return: Pointer on success, NULL if it fails
 * @nmemb: Length of the array to allocate
 * @size: Size of the members
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
