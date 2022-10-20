#include <stdlib.h>
#include "main.h"

/**
 * free_grid  - Frees a greed
 * Return: Nothing
 * @grid: Grid to free
 * @height: Height of the grid
 */


void free_grid(int **grid, int height)
{
	int h;

	if (grid != NULL)
	{
		for (h = height; h >= 0; h--)
		{
			free(grid[h]);
		}
		free(grid);
	}
}
