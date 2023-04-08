#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: int
 * @argv: array of string
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;
	int total = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}


	for (i = 1; i < argc; i++)
	{
		char *a = argv[i];
		int j;

		for (j = 0; a[j]; j++)
		{
			if (!isdigit(a[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(a);
	}
	printf("%d\n", total);
	return (0);
}
