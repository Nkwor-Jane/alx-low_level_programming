#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-D grid previously created by
 * alloc-grid function
 * @grid: address of the 2-D grid
 * @height: height of grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
