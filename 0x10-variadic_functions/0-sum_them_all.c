#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameteres
 * @n: int
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list args;

	va_start(args, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);

	return (sum);
}
