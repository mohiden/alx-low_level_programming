#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: char
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;
	int len;

	if (!b)
		return (0);


	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}


	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			result =  result * 2 + (b[i] - '0');
		else
			return (0);
	}
	return (result);
}
