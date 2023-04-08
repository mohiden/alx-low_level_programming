#include <stdio.h>

/**
 * main - prints all the arguemnts
 * passed the excutable
 * @argc: int
 * @argv: array of string
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
