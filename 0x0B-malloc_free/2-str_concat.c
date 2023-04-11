#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: newly allocated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *string;

	len1 = len2 = i = j = 0;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;


	string = malloc(sizeof(char) * (len1 + len2 + 1));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		string[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		string[i] = s2[j];

	string[len1 + len2] = '\0';

	return (string);
}
