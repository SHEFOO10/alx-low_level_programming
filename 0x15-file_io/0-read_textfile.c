#include "main.h"

/**
 * read_textfile - read text file
 *
 * @filename: to be opened and read data from it.
 * @letters: number of letters it should read and print.
 *
 * Return: (n) number of letters it printed , (0) if error occured.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = (char *) malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	ssize_t bytes_read = read(fd, buffer, letters);

	write(1, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	return (bytes_read);

	close(fd);
}

