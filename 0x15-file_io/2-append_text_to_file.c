#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text at end of file
 * @filename: pointer to name of the file
 * @text_content: Te string to add
 *
 * Return: -1 if func fails, otherwise 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_fd;
	ssize_t bytes_w;

	if (filename == NULL)
		return (-1);

	file_fd = open(filename, O_WRONLY | O_APPEND);

	if (file_fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_w = write(file_fd, text_content, strlen(text_content));

		if (bytes_w == -1)
		{
			close(file_fd);
			return (-1);
		}
	}

	close(file_fd);
	return (1);
}
