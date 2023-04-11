#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to  a 2 dimensional
 * array of integers.
 * @width: int
 * @height: int
 *
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	i = 0;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);

	array = malloc(sizeof(int *) * width);
	while (i < width)
	{
		array[i] = malloc(sizeof(int) * height);
		i++;
	}

	i = 0;
	while (i < width)
	{
		j = 0;
		while (j < height)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}

	return (array);
}
