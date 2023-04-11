#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocate new space in memory
 * containing copy of a string
 * @str: string
 *
 * Return: char
 */

char *_strdup(char *str)
{
	char *string;
	int i, len;

	i = 0;
	len = 0;


	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
		return (NULL);

	while ((string[i] = str[i]) != '\0')
		i++;

	return (string);

}
