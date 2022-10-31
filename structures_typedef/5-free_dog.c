#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free allocated dogs
 * Return: Nothing
 * @d: Dog struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
