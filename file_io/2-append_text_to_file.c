#include "main.h"

/**
 * append_text_to_file - Writes content at the end of a file
 * Return: 1 on success -1 if it fails
 * @filename: Name of the file
 * @text_content: Text to write in the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, c;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);
	if (fd > 0 && !text_content)
		return (1);

	c = _strlen(text_content);
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
