#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a frid in the memory
 * Return: Pointer on success, or NULL
 * @width: Width of the grid
 * @height: Height of the grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grd;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grd = malloc(sizeof(int *) * height);

	if (grd == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grd[i] = malloc(sizeof(int) * width);

		if (grd[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(grd[i]);
			}
			free(grd)
			return (NULL);
		}
		else
		{
			for (j = 0; grd[i][j]; j++)
			{
				grd[i][j] = 0;
			}
		}
	}
	return (grd);
}
