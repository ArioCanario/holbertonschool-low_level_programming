#include <stdlib.h>
#include "main.h"

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
		
		if(grd[i] == NULL)
		{
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
