#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 * Return: *s1 - *s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0') && (*s2 != '\0'))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
