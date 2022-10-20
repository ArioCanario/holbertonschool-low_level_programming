#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
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

	conc = malloc(sizeof(char) * (i + j) + 1);

	for (k = 0; k < i; k++)
	{
		conc[k] = s1 [k];
	}
	for (l = 0; (k + l) < (i + j); l++)
	{
		conc[k + l] = s2[l];
	}
	if (conc == NULL)
	{
		return (NULL);
	}
	return (conc);
}
