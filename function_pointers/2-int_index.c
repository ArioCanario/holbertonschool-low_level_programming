#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Checks if a number is equal to another
 * Return: c on success
 * @size: size of the array
 * @cmp: Pointer to the function
 * @array: Pointer to the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			if (cmp(array[c]) != 0)
			{
				return (c);
			}
		}
	}
	return (-1);
}
