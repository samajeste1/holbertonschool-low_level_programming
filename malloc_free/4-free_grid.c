#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory allocated by alloc_grid
 * @grid: 2D grid to free
 * @height: number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
