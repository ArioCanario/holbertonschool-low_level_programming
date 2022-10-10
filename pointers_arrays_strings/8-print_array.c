#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l <= (n - 1); l++)
	{
		printf("%d", a[l]);
		
		if (l != (n - 1))
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}
