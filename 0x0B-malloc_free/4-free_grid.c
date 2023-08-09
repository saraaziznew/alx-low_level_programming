#include "main.h"
#include <stdlib.h>
/**
 * free_grid - entry point
 * @grid: string to print
 * @height: string to print
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
