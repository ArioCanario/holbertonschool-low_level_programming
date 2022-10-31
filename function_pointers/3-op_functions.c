#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substract two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calculates the division of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates the module two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
