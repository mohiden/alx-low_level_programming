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
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	while (i < height)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			int j = 0;

			while (j <= i)
			{
				free(array[j]);
				j++;
			}
			return (NULL);
		}
		i++;
	}
	i = 0;
		while (i < height)
		{
		j = 0;
		while (j < width)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array);
}
