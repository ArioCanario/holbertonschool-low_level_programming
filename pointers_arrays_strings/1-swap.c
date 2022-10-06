#include "main.h"

/**
 * swap_int - Swaps the values of a and b
 * Return: Nothing
 *@a: Variable
 *@b: Variable
 */

void swap_int(int *a, int *b)
{
	int a_aux = *a;
	int b_aux = *b;

	*a = b_aux;
	*b = a_aux;
}
