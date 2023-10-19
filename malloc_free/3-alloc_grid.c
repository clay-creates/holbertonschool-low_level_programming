#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - initializes grid with value of 0
 * @width: width of grid
 * @height: height of grid
 *
 * Return: returns pointer to 2D array or NULL on fail
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int*) * width);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}

			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
