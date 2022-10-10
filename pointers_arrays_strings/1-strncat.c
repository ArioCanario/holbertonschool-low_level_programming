#include "main.h"

char *_strncat(char *dest, char *src, int n)

{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0'; i++)
	{
	}
	if (n < i)
	{
		for (j = 0; j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}
	else if ((n > i) && (i != 0))
	{
		for (j = 0; j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}
	return (dest);
}
