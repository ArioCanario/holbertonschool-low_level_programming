#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Iterates all the elements of an array
 * Return: Nothing
 * @array: Array
 * @action: Pointer to the function
 * @size: Size of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int c;

	if (!action || !array)
	{
		return;
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			action(array[c]);
		}
	}
}
