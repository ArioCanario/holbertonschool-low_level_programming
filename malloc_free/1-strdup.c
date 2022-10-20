#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	unsigned int i, j;
	char *nstr;

	if(str == NULL || str[0] = '\0')
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
