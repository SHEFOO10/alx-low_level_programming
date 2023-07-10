#include "main.h"
#include <stdio.h>

/**
 * create_buffer - create buffer for the second file.
 *
 * @filename: name of the file that i would write to.
 *
 * Return: buffer pointer on success, (99) on failure.
 */

char *create_buffer(char *filename)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * c_fd - close file.
 *
 * @fd: file discriptor of the file to be closed.
 */
void c_fd(int fd)
{
	int close_fd = close(fd);

	if (close_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
/**
 * main - Entry point
 *
 * @argc: number of args passed to the program.
 * @argv: args values.
 *
 * Return: (0) on success,
 */


int main(int argc, char *argv[])
{
	char *buffer;
	int from_f, to_f, r_from, w_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s from_file to_file\n", argv[0]);
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from_f = open(argv[1], O_RDONLY);
	r_from = read(from_f, buffer, 1024);
	to_f = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (to_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	do {
		if (from_f == -1 || r_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't Read from %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w_to = write(to_f, buffer, r_from);
		if (to_f == -1 || w_to == -1)
		{
			free(buffer);
			exit(99);
		}
		r_from = read(from_f, buffer, 1024);
	} while (r_from > 0);

	free(buffer);
	c_fd(from_f);
	c_fd(to_f);
	return (0);
}
