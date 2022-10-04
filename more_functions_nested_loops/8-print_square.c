#include "main.h"

/**
 * print_square - Prints a square of the given size
 * Return: Nothing
 *@size: Size of the square
 */

void print_square(int size)
{
	int c, d;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			for (d = 0; d < size; d++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
