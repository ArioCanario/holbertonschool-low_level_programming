#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * Return: Nothing
 * @str: String
 */

void puts_half(char *str)
{
	int i;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
		for (i = (l / 2); (i < l && (i % 2) != 0) || ((i % 2) == 0); i++)
		{
			_putchar(str[i]);
		}
}
