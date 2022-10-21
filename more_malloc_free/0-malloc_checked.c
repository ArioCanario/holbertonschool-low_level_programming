#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	int *ptr;

	if (b < 1)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
