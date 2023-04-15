#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the standard output
 *
 * @filename: name of the file.
 * @letters: amount of letters to red.
 *
 * Return: (0) if filename is NULL,
 *  (0) if write fails or does not write the expected amount of bytes.
 *  if the file can not be opened or read, return (0)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o_file, r_file, w_file;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o_file = open(filename, O_RDONLY);
	r_file = read(o_file, buffer, letters);
	w_file = write(STDOUT_FILENO, buffer, r_file);

	if (o_file == -1 || r_file == -1 || w_file == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o_file);

	return (w_file);
}
