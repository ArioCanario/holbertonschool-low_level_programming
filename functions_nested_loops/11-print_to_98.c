#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - Prints numbers from n to 98
 *Return; Nothing
 *@n: Number
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		printf(", ");
		n++;
	}
	while (n > 98)
	{
		printf("%d", n);
		printf(", ");
		n--;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
