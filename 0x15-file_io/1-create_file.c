#include "main.h"

/**
 * create_file - creates a file
 * @filename: NAME OF FILE TO BE CREATED
 * @text_content: Null terminated string to write to file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, text_wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		text_wr = write(fd, text_content, strlen(text_content));

		if (text_wr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
