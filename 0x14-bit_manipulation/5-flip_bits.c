#include "main.h"

/**
* flip_bits - flips bits
* @n: int
* @m: int
*
* Return: int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int count = 0;

	x = n ^ m;
	while (x > 0)
	{
		if ((x & 1) == 1)
			count++;
		x = x >> 1;
	}
	return (count);
}
