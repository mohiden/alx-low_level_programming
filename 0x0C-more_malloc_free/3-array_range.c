#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: int
 * @max: int
 *
 * Return: pointer to array of integers
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min++;
	}

	return (array);


}
