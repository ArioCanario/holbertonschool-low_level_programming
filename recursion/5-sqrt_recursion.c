#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: input number
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion2(n, 1));
}

/**
 * _sqrt_recursion2- function that gets de num of sqroot
 *
 * @num: input number
 * @i: Counter variable
 * Return: 0
 */

int _sqrt_recursion2(int num, int i)
{
	if (num == (i * i))
	{
		return (i);
	}
	else if (num > (i * i))
	{
		return (_sqrt_recursion2(num, i + 1));
	}
	else
	{
		return (-1);
	}
}
