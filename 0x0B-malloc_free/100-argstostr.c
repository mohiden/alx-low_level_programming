#include "main.h"
#include <stdlib.h>

/**
 * _strlen - helper function to get string length
 * @s: string to evaluate
 *
 * Return: length of string
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s != '\0')
    {
        len++;
        s++;
    }

    return (len);
}

/**
 * argstostr - concatenates all arguments of the program.
 * @ac: argument count.
 * @av: pointer to array of size ac.
 *
 * Return: NULL if ac == 0 or av == NULL, Pointer to new string.
 * NULL on fail.
 */
char *argstostr(int ac, char **av)
{
    int i, j, k, size;
    char *arg;

    size = 0;
    k = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
        size += _strlen(av[i]) + 1;

    arg = malloc(sizeof(char) * size);
    if (arg == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            arg[k] = av[i][j];
            k++;
        }
        arg[k] = '\n';
        k++;
    }
    arg[k] = '\0';

    return (arg);
}

