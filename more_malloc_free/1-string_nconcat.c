#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates 2 strings
 * Return: NULL if the program fails, conc in success
 * @s1: First string
 * @s2: Second string
 * @n: Bytes of the second string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *conc;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	
	if (n < j)
	{
		j = n;
	}

	conc = malloc(sizeof(char) * (i + j) + 1);

	if (conc == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		conc[k] = s1[k];
	}
	for (l = 0; (k + l) < (i + j); l++)
	{
		conc[k + l] = s2[l];
	}
	s2[l] = '\0';
	return (conc);
}
