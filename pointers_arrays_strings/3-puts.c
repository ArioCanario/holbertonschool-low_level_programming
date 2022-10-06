#include "main.h"

/**
 * _puts - Prints a string
 * Return: nothing
 * @str: Name of the string
 */

void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar(10);
}
