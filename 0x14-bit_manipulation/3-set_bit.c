#include "main.h"

/**
* set_bit - sets value of a bit to 1 at given index
* @n: pointer to int
* @index: int
*
* Return: int
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	i = 1;

	while (index > 0)
	{
		index--;
		i *= 2;
	}
	*n += i;
	return (1);
}
