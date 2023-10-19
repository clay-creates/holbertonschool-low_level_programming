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
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = calloc(width + height, sizeof(int));

	if (grid == NULL)
	{
		return (NULL);
	}

	return (grid);
}
