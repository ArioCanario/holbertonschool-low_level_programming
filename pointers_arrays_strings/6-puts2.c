#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * Return: Nothing
 * @str: String
 */

void puts2(char *str)
{
	int i;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	for (i = 0; i <= l; i++)
	{
		if ((i % 2) == 0 && str[i] != '\0')
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
