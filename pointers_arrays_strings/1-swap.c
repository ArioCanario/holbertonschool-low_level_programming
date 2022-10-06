#include "main.h"

void swap_int(int *a, int *b)
{
	int a_aux = *a;
	int b_aux = *b;

	*a = b_aux;
	*b = a_aux;
}
