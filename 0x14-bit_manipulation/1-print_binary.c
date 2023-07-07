#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints a binary
 * @n: unsigned int long
 *
 * Return: void
 */

void print_binary(unsigned int long n)
{
	int i, shift;

	shift = sizeof(unsigned int long) * 8 - 1;
	while ((n >> shift) == 0 && shift  > 0)
		shift--;

	for (i = shift; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");

	}

}
