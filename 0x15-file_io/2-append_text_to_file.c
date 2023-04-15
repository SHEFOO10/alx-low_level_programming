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
	int O_file, W_file, text_len = 0;

	if (filename == NULL)
		return (-1);

	O_file = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len];)
			text_len++;
	}

	W_file = write(O_file, text_content, text_len);

	if (O_file != W_file)
		return (1);
	else
		return (-1);
}
