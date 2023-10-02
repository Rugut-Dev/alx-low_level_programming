#include "main.h"

/**
 * read_textfile - reads textfile & print to stdout
 * @filename: ptr to file
 * @letters: no of chars read
 *
 * Return: letters, 0 for cant be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, letters_rd, letters_wr;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	letters_rd = read(fd, buffer, letters);
	letters_wr = write(STDOUT_FILENO, buffer, letters_rd);

	free(buffer);
	close(fd);

	return (letters_wr);
}
