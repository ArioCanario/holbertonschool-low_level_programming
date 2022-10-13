#include "main.h"

/**
 * _strstr - Locate a character in a string
 * @haystack: Pointer
 * @needle: Pointer
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == '\0')
		{
			return (NULL)
		}
		else if (needle[0] == haystack[i] && needle[1] == haystack[i + 1])
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
