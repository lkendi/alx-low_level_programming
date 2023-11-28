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
	ssize_t read_count, write_count;

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
	file_to = open(argv[2], O_WRONLY | O_CREAT
			| O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((read_count = read(file_from, buffer, 1024)) > 0)
	{
		write_count = write(file_to, buffer, read_count);
		if (write_count != read_count)
		{
			close(file_from);
			close(file_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(file_from) == -1)
		put_error(100, "Error: Can't close %d\n", file_from);
	if (close(file_to) == -1)
		put_error(100, "Error: Can't close %d\n", file_to);
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
	dprintf(STDERR_FILENO, "%s %d\n", error_message, fd_value);
	exit(exit_code);
}
