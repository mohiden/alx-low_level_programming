#include "main.h"

int pal_checker(char *s, int i, int j);
int _strlen_recursion(char *s);

/**
 * pal_checker - checks characters for palindrome
 * @s: string
 * @i: int
 * @j: int
 *
 * Return: int
 */

int pal_checker(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (*(s + i) != *(s + j - 1))
		return (0);
	return (pal_checker(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	if (*s != 0)
		return (pal_checker(s, 0, _strlen_recursion(s)));
	return (1);
}

/**
 * _strlen_recursion - returns length of string
 * @s: string
 *
 * Return: string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}







