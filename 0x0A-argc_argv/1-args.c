#include <stdio.h>

/**
 * main - prints the number of items
 * passed to the excutable
 * @argc: int
 * @argv: array of string
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
