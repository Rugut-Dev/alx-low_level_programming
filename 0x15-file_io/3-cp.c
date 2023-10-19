#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buf(char *file);
void close_file(int fd);

/**
 * create_buf - Allocates space for buf.
 * @file: file buffer
 *
 * Return: ptr
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes file
 * @fd: file descriptor.
 *
 * Return: void
 */
void close_file(int fd)
{
	int rtn;

	rtn = close(fd);

	if (rtn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Cps contents from file to another.
 * @argc: No. of args passed
 * @argv: args array
 *
 * Return: 0.
 *
 * Description: 97(incorrect argc), 98(Not found), 99(cant be created),
 * 100(cant be closed).
 */
int main(int argc, char *argv[])
{
	int srce, fto, rd, wt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buf(argv[2]);
	srce = open(argv[1], O_RDONLY);
	rd = read(srce, buffer, 1024);
	fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (srce == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wt = write(fto, buffer, rd);
		if (fto == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(srce, buffer, 1024);
		fto = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(srce);
	close_file(fto);

	return (0);
}
