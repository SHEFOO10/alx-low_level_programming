#include "main.h"

/**
 * create_file - creates a file.
 *
 * @filename: name of the file you are creating.
 * @text_content: content to be inserted on created file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int o_file, w_file, content_len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (content_len = 0; text_content[content_len];)
			content_len++;
	else
		return (-1);


	o_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_file = write(o_file, text_content, content_len);

	if (o_file == -1 || w_file == -1)
		return (-1);

	close(o_file);
	return (1);
}
