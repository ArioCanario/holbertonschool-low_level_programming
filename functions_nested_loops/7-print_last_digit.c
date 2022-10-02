#include "main.h"

int print_last_digit(int n)
{
	int c = n % 10;

	if (c < 0)
	{
		c = c * -1;
	}

	_putchar(c);
	return (c);
}
