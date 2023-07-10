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
	int len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0';)
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w_2file = write(fd, text_content, len);

	if (w_2file == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

