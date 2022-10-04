#include "main.h"

/**
 * print_line - Prints a line of the given length
 * Return: Nothing
 *@n: Length of th line
 */

void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
		_putchar(10);
	}
	else
	{	
		_putchar(10);
	}
}
