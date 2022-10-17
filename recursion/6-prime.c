#include "main.h"
/**
 * is_prime_number - Checks if a number is prime or not
 * @n: input number
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number2(n, 2));
}

/**
 * is_prime_number2 - Defines the return value
 * @num: input number
 * @i: Counter
 * Return: 0
 */

int is_prime_number2(int num, int i)
{
	if (num == i)
	{
		return (1);
	}
	if (num % i == 0)
	{
		return (0);
	}
	return (is_prime_number2(num, i + 1));
}
