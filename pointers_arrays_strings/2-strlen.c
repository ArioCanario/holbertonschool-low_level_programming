#include "main.h"

/**
 * _strlen - Returns the number of characters in a string
 * Return: Length of the string
 *@s: Name of the array
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
