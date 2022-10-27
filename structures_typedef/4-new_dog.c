#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Copy a struct to another
 * Return: Pointer
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name != NULL && owner != NULL)
	{
		newdog = malloc(sizeof(dog_t));
		if (newdog == NULL)
		{
			return (NULL);
		}
		newdog->name = _strdup(name);
		if (newdog->name == NULL)
		{
			free(newdog);
			return (NULL);
		}
		newdog->owner = _strdup(owner);
		if (newdog->owner == NULL)
		{
			free(newdog->name);
			free(newdog);
			return (NULL);
		}
		newdog->age = age;
	}
	return (newdog);
}


/**
 * _strdup - Duplicates a string
 * Return: NULL if the program fails, nstr on success
 * @str: Initial String
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *nstr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
	}

	nstr = malloc(sizeof(char) * (j + 1));

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		nstr[i] = str[i];
	}
	return (nstr);
}
