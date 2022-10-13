#include "main.h"

/**
 * print_diagsums - It's a function
 * @a: It's a variable!
 * @size: It's another variable!!!!!!!!!!!!!!!!!
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum1 = sum1 + a[i + size * i];
		sum2 = sum2 + a[size - 1 + (size - 1) * i];
	}

	printf("%d", sum1);
	printf(", ");
	printf("%d", sum2);
	printf("\n");
}
