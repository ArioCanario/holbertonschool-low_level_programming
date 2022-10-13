#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer
 * @accept: Pointer
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, h;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		h = 1;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				h = 0;
			}
		}
		if (h == 1)
			break;
	}
	return (count);
}
