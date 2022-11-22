#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text and prints it to stdout
 * Return: On success the number of characters printed, -1 or 0 if it fails
 * @filename: Name of the file to read
 * @letters: Number of characters to print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	r = read(fd, buffer, letters);

	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buffer, r);

	if (w == -1)
		return (0);

	close(fd);
	return (w);
}
