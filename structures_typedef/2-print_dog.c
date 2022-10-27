#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the structure data
 * Return: Nothing
 * @d: Structure
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			  printf("Owner: (nil)\n");
	}
}
