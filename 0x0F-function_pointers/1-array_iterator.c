#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - runs a function given as parameter
 * @array: int
 * @size: size_t
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if(!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

