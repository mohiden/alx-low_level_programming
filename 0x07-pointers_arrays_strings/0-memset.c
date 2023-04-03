#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @a: memory are to be filled
 * @x: char to copy
 * @b: number of times to copy x
 *
 * Return: pointer to memory  area a
*/

char *_memset(char *a, char x, unsigned int b)
{
	unsigned int y;

	for (y = 0; y < b; y++)
	{
		a[y] = x;
	}

	return (a);
}
