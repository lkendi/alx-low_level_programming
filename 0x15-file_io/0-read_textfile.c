#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of the file to read
 * @letters: the number of letters it should read anfd print
 * Return: 0 if filename is NULL or it fails
 * Else return the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_count, write_count;
	int file;
	char *words;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	words = malloc(sizeof(char) * (letters + 1));
	if (words == NULL)
	{
		close(file);
		return (0);
	}
	read_count = read(file, words, letters);
	if (read_count == -1)
	{
		close(file);
		free(words);
		return (0);
	}
	words[read_count] = '\0';
	write_count = write(STDOUT_FILENO, words, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		close(file);
		free(words);
		return (0);
	}
	close(file);
	free(words);
	return (read_count);
}
