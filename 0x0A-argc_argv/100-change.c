#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: int
 * argv: array of string
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents;

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}


	int count;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			count++;
		} else if (cents >= 10)
		{
			cents -= 10;
			count++;
		} else if (cents >= 5)
		{
			cents -= 5;
			count++;
		} else if (cents >= 2)
		{
			cents -= 2;
			count++;
		} else
		{
			cents -= 1;
			count++;
		}
	}
	printf("%d\n", count);
	return (0);

}


