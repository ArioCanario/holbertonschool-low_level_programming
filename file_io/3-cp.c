#include "main.h"

/**
 * main - Copy a file
 * Return: 0 on success
 * @argc: Number of argument
 * @argv: names of the files
 */
int main(int argc, char *argv[])
{
	if (argc > 3 || argc <= 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}

/**
 * cp - Copies data from a file to another
 * Return: Nothing
 * @filename_old: Original file
 * @filename_new: New file
 */

void cp(char *filename_old, char *filename_new)
{
	int fd_old, fd_new, r, w, c_old, c_new;
	char *buffer[1024];

	fd_old = open(filename_old, O_RDONLY);
	if (fd_old == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename_old);
		exit(98);
	}
	fd_new = open(filename_new, O_CREAT | O_TRUNC | O_RDWR, 0664);
	r = read(fd_old, buffer, 1024);
	while (r != 0)
	{
		w = write(fd_new, buffer, r);
		if (w == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename_new);
			exit(99);
		}
		r = read(fd_old, buffer, 1024);
	/*	if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename_old);
			exit(98);
		}
		*/
	}
	c_old = close(fd_old);
	if (c_old == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_old);
		exit(100);
	}
	c_new = close(fd_new);
	if (c_new == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_new);
		exit(100);
	}
}
/**
 * _strlen - returns the length of a string
 * @s: pinter to addres os strign
 *
 * Return: all elements of the stirng
 */
int _strlen(char *s)
{
	int count = 0;

	for (; s[count]; count++)
		;
	return (count);
}
