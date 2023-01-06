#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searchs an integer in an array
 * Return: Index in success, -1 if it fails
 * @size: Size of the array
 * @value: Value to search
 * @array: Array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
