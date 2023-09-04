#include "main.h"

/**
 * read_textfile - Read file and output to Standard Output
 * @filename: text file
 * @letters: num of letters to be read
 *
 * Return: actual number of letters it could read/print
 * or 0 - if the file can not be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t bytes_read;
	ssize_t bytes_written;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	bytes_read = read(fd, buf, letters);
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	free(buf);
	close(fd);

	return (bytes_written);
}
