#include "main.h"

/**
 * *_strcpy - Copy a string to another pointer
 * Return: dest
 * @dest: destinatio pointer
 * @src: source pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
