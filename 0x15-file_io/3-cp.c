#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	char buffer[1024];
	ssize_t read, written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	while ((read = read(file_from, buffer, 1024)) > 0)
	{
		written = write(file_to, buffer, read);
		if (written != read)
		{
			close(file_from);
			close(file_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		put_error(100, "Error: Can't close %d\n", file);
	}
	return (0);
}

/**
 * put_error - prints an error to STDERR
 * @exit_code: exit code
 * @error_message: The error message to print
 * @fd_value: file descriptor value
 * Return: nothing
 */

void put_error(int exit_code, const char *error_message, int fd_value)
{
	dprintf(STDERR_FILENO, "%s %d\n", error_message, fd);
	exit(exit_code);
}
