#include "main.h"

/**
* clear_bit - sets a bit value to 0 at given index
* @n: pointer to int
* @index: int
*
* Return: int
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
