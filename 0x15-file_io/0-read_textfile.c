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
	ssize_t bytes_read, bytes_write;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = (char *) malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);

	bytes_write = write(1, buffer, bytes_read);
	if (bytes_read == -1 || bytes_write == -1 || bytes_read != bytes_write)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bytes_read);
}

