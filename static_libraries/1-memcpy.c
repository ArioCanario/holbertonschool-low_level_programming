#include "main.h"

/**
 * *_memcpy - Copies the first n bytes with b
 * @dest: Pointer
 * @src: Pointer
 * @n: Bytes number
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
