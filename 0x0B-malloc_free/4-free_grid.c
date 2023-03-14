#include <stdlib.h>
/**
 * free_grid- frees 2 dim array
 * @grid: int pointer to 2 dim array
 * @height: height of an array
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
