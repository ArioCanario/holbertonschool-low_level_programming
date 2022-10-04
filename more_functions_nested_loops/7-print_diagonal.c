#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 * Return: Nothing
 * @n: Length of the line
 */

void print_diagonal(int n)
{
	int c, d, s;

	s = 0;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (d = 0; d < s; d++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
			s++;
		}
	}
	else
	{
		_putchar(10);
	}
}

