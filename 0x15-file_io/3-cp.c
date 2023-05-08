#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
void error_exit(int code, const char *message, const char *arg);

/**
 * error_exit - exit if error
 * @code: int
 * @message: string
 * @arg: string
 *
 * Return: void
 */

void error_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * main - copies fileA content to fileB
 * @argc: int
 * @argv: array of strings
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *buffer[BUFFER_SIZE];
	ssize_t n_read, n_written;

	if (argc != 3)
		error_exit(98, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);


	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		if (n_written != n_read)
			error_exit(99, "Error: Short write to %s\n", argv[2]);
	}
	if (n_read == -1)
		error_exit(99, "Error: Can't read from file %s\n", argv[1]);
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{

		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	free(buffer);
	return (0);
}
