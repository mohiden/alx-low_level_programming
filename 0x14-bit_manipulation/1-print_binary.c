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
	if (n > 1)
		print_binary(n >> 1);
	printf("%d", (n & 1) ? 1 : 0);

}
