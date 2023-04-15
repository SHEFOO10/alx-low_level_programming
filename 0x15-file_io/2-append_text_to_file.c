#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: name of the file.
 * @text_content: content to be appended to the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int content_len = 0, o_file, w_file;

	if (filename == NULL)
		return (-1);

	o_file = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		for (content_len = 0; text_content[content_len];)
			content_len++;
		w_file = write(o_file, text_content, content_len);
	}
	else
		return (0);

	if (o_file == -1 || w_file == -1)
		return (-1);

	close(o_file);

	return (1);
}
