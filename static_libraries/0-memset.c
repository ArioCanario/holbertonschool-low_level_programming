#include "main.h"

/**
 * *_memset - Fill first n bytes with b
 * Return: s
 * @n: Bytes
 * @s: Pointer
 * @b: Constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
