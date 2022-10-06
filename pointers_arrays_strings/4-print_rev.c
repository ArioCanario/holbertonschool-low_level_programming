#include "main.h"

/**
 * print_rev - Prints a string
 * Return: nothing
 * @s: Name of the string
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	l--;
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar(10);
}
