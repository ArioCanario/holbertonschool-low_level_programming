#include "main.h"

/**
 * _strpbrk - Locate a character in a string
 * @s: Pointer
 * @accept: Pointer
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
