#include "main.h"

/**
 * _pow_recursion - Calculates the power of a function
 * Return: Result
 * @x: Number
 * @y: Power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
