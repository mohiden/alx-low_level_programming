#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array
 * @grid: the 2 dimensional array
 * @height: height of the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
