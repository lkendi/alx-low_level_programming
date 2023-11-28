#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 *
 * Note: The created file must have rw------- permissions
 *
 * If the file already exists, truncate it
 * If filename is NULL return -1, if text-content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t content_len = 0;
	ssize_t write_count;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[content_len] != '\0')
		{
			content_len++;
		}
		write_count = write(file, text_content, content_len);
		if (write_count == -1 || write_count != content_len)
		{
			close(file);
			return (-1);
		}
	}
	close(file);

	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		return (-1);
	}
	return (1);
}
