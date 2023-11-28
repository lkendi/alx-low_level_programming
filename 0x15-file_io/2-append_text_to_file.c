#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if the file exists, -1 if it doesn't exist
 * or you don't have the required permission to write to the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t read_count, write_count;

	if (filename == NULL)
	{
		return (-1);
	}
	if (access(filename, F_OK) != 0)
	{
		file = open(filename, O_WRONLY | O_CREAT);
		if (file == -1)
			return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	read_count = 0;
	while (text_content[read_count] != '\0')
	{
		read_count++;
	}
	write_count = write(file, text_content, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
