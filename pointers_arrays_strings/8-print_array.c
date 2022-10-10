#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the values of an array
 * Return: Nothing
 * @a: Array
 * @n: Length of the array
 */

void print_array(int *a, int n)
{
	int l;

		for (l = 0; l <= (n - 1); l++)
		{
			if (l == (n - 1))
			{
				printf("%d", a[l]);
			}
			else
			{
				printf("%d, ", a[l]);
			}
		}
		printf("\n");
}
