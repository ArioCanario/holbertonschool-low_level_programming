#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Save memory depending of the type
 * Return: ptr on success, 98 on fail
 * @b: Length of the array
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b < 1)
	{
		exit(98);
	}

	ptr = malloc(sizeof(ptr) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
