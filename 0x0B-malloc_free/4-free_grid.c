#include <stdlib.h>

/**
 * free_grid - Function that frees a 2-dimensional array
 * @grid: array to be freed
 * @height: size of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
