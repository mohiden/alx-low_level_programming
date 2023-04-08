#include <stdio.h>

/**
 * main - returns the program name
 * @argc: int
 * @argv: array of string
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
