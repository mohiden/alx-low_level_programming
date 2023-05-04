#include <stdio.h>
#include "main.h"

/**
 * get_bit - get the value of bit at a given index
 * @n: int
 * @index: int
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
