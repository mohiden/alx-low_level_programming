#include "main.h"

int find_natural(int x, int y);

/**
 * _sqrt_recursion - gets the natural square root of a number
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_natural(1, n));


}


/**
 * find_natural - finds the natural
 * square root of a number
 * @x: int
 * @y: int
 *
 * Return: int
 */

int find_natural(int x, int y)
{
	if (x * x > y)
		return (-1);
	if (x * x == y)
		return (x);
	return (find_natural(x + 1, y));

}
