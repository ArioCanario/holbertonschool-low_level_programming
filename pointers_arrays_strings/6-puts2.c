#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * Return: Nothing
 * @str: String
 */

void puts2(char *str)
{
	int l;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
		l++;
	}
	_putchar(10);
}
