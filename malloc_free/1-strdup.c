#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	unsigned int i, j;
	char *nstr;

	if(str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
	}
	if (j < 1)
	{
		return(NULL);
	}

	nstr = malloc(sizeof(char) * j);

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= j; i++)
	{
		nstr[i] = str[i];
	}
	return (nstr);

}
