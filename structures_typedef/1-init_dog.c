#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize a Structure
 * Return: Nothing
 * @d: Structure
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

