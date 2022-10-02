#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * Return: c
 * @c: Last digit of given number
 * @n: Given number
 */

int print_last_digit(int n)
{
	int c = n % 10;

	if (c < 0)
	{
		c = c * -1;
	}

	_putchar('0' + c);
	return (c);
}
