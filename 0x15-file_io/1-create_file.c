#include "main.h"

/**
 * create_file - function creates a file.
 *
 * @filename: name of the file to be created.
 * @text_content: text to be writed into the file.
 *
 * Return: (1) on success, (-1) on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	write_status = write(fd, text_content, _strlen(text_content));
	if (write_status == -1)
		return (-1);
	close(fd);
	return (1);
}

/**
 * _strlen - calculate length of the string.
 *
 * @text: string to calculate it's length.
 *
 * Return: length of the string or (0).
 */

int _strlen(char *text)
{
	int length = 0;

	while (text[length] != '\0')
		length++;

	return (length);
}
