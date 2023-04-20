#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints number followed by new line
 * @separator: string
 * @n: unsigned int
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator)
		{

			if (i == n - 1)
			{
				printf("%d", va_arg(args, unsigned int));
			} else
			{
				printf("%d%s", va_arg(args, unsigned int), separator);
			}
		}

	}
	printf("\n");
	va_end(args);
}
