#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14
 * Return: Nothing
 */

void more_numbers(void)
{
	int c, a;

	for (a = 0; a <= 9; a++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
	_putchar(10);
	}
}
