#include "main.h"

/**
 * create_file - create new file
 *
 * @filename: name of the new file.
 * @text_content: content for this new file.
 *
 * Return: (1) on success, (-1) on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w_2file;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	w_2file = write(fd, text_content, strlen(text_content));

	if (fd == -1 || w_2file == -1)
		return (-1);

	return (1);
}

