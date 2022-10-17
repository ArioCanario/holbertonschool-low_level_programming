#include "main.h"

/**
 * _isdigit - Check if c is a digit
 * Return: 1 if c is a digit, 0 otherwise
 * @c: Character to check
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
