#include "main.h"

/**
 * read_textfile - reads a text file
 *		and prints it to the POSIX standard output.
 *
 * @filename: name of the file.
 * @letters: number of letters to be readed.
 *
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_wcount, wordcount;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	read_wcount = read(file, buffer, letters);

	if (read_wcount == -1)
		return (0);

	wordcount = write(STDOUT_FILENO, buffer, read_wcount);

	if (wordcount == -1 || read_wcount != wordcount)
		return (0);

	free(buffer);
	close(file);

	return (wordcount);
}

