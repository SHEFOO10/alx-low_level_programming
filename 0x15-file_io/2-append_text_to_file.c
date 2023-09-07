#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: name of the file to append text content to it.
 * @text_content: text to be appended to the file.
 *
 * Return: (1) on Success, (-1) On failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_status, length = 0;

	if (filename == NULL)
		return (-1);
	open_file = open(filename, O_WRONLY | O_APPEND);

	if (open_file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[length] != '\0')
			length++;
		write_status = write(open_file, text_content, length);
		if (write_status == -1)
			return (-1);
	}
	return (1);
}

