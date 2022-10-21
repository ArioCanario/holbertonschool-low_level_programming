#include "main.h"
#include <stdlib.h>

/**
 * array_range - Allocates all te values between 2 numbers
 * Return: ptr in success; NULL if fails
 * @min: Min value
 * @max: Max value
 */

int *array_range(int min, int max)
{
	int i;
	int j = 0;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; j++)
	{
		i++;
	}

	ptr = malloc(sizeof(int) * j);

	if (ptr == NULL)
	{
		return (NULL);
	}

	j = 0;
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
