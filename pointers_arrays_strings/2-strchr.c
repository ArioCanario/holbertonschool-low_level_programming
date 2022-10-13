#include "main.h"

/**
 * *_strchr - Copies the first n bytes with b
 * @s: Pointer
 * @c: Character
 * Return: Pointer to the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
		return (&s[i]);

	return (NULL);
}
