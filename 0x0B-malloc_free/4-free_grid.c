#include <stdio.h>
#include <stdlib.h>
/**
  * free_grid - frees allocated memory or the grid
  * created by alloc_grid()
  * @grid: grid to free
  * @height: height of grid
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
