#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file
 * @text_content: Null terminated string to be added
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, text_wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

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
	return (-1);
}
