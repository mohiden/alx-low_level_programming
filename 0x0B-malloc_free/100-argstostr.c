#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int
 * @av: array of strings
 *
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		len++;
		i++;
	}
	result = malloc((sizeof(char) * len) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	len = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			result[len] = av[i][j];
			j++;
			len++;
		}
		result[len] = '\n';
		len++;
		i++;
	}
	av[len] = '\0';

	return (result);
}


