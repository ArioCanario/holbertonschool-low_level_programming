#include "main.h"

/**
 * *_strcat - Concatenates 2 strings
 * Return: dest
 * @src: Source string
 * @dest: Destination string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0'; i++)
	{
	}

	for (; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
