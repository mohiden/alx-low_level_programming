#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with specific char.
 * @size: size of the array
 * @c: initial char
 *
 * Return: char or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size);

	if (array == NULL)
		return (NULL);


	while (i< size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
