#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file
 * @filename: pointer to the name of the file to create
 * @text_content: Pointer to a astring to write to the file
 *
 * Return: -1 if func fails, otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
	int file_fd;
	ssize_t bytes_w;

	if (filename == NULL)
		return (-1);

	file_fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

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
