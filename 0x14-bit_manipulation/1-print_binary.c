#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints binary
 * @n: unsigned int long
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, shift;

	shift = sizeof(unsigned long int) * 8 - 1;

	while ((n >> shift) == 0 && shift > 0)
		shift--;

	for (i = shift; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printft("1");
		else
			printf("0");
	}
}
