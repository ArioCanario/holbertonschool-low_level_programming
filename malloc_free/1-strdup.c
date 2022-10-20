#include "main.h"
#include <stdlib.h>

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
