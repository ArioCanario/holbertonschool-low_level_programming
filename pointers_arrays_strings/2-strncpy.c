#include "main.h"

/**
 * *_strncpy - Copy a string to another pointer
 * Return: dest
 * @dest: destinatio pointer
 * @src: source pointer
 * @n: Max bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		if (i < n)
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
