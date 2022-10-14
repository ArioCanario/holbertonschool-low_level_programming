#include "main.h"

/**
 * _strlen_recursion - Chack the length of a string
 * @s: Pointer
 * Return: Length
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
