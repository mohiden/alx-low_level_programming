#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: unsigned int
 *
 * Return: pointer to array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int len1, len2, i, j;

	len1 = len2 = 0;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;


	if (n >= len2)
	{
		n = len2;
	}


	array = malloc(sizeof(char) * len1 + n + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		array[i] = s1[i];

	for (j = 0; j < n; j++)
		array[len1++] = s2[j];


	array[len1 + n] = '\0';

	return (array);

}

