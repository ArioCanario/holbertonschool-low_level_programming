#include "main.h"
/**
 * print_most_numbers - Prints numbers from 0 to 9 except 2 and 4
 * Return: Nothing
 */

void print_most_numbers(void)
{
	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{

		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
