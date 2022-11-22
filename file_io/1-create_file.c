#include "main.h"

/**
 * create_file - Creates a file and writes content in it
 * Return: 1 on success -1 if it fails
 * @filename: Name of the file
 * @text_content: Text to write in the file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, c;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	c = _strlen(text_content);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (fd == -1)
		return (-1);
	w = write(fd, text_content, c);

	if (w == -1)
		return (-1);

	close(fd);
	return (1);
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
