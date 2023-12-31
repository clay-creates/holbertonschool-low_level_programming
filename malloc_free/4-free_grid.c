#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free space allocated by alloc_grid
 * @grid: pointer pointing to grid
 * @height: rows in grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
