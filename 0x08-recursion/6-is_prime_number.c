#include "main.h"

int find_prime(int x, int y);

/**
 * is_prime_number - checks if the number is prime or not
 * @n: int
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, n - 1));
}

/**
 * find_prime - validate if prime
 * @x: int
 * @y: int
 *
 * Return: int
 */

int find_prime(int x, int y)
{
	if (y == 1)
		return (1);
	if (x % y == 0 && y > 0)
	{
		return (0);
	}
	return (find_prime(x, y - 1));
}
