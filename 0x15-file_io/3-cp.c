#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create(char *file);
void close_file(int f);


/**
 * create - Allocates new space in memory
 * @file: string
 *
 * Return: string
 */

char *create(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}


/**
 * close_file - closes file
 * @f: int
 *
 * Return: void
 */
void close_file(int f)
{
	int cl;
	cl = close(f);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}


/**
 * main - copies fileA content to fileB
 * @argc: int
 * @argv: array of string
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int from, to, re, rw;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || re == -1)
		{

			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		rw = write(to, buffer, re);

		if (to == -1 || rw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		re = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rw > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

