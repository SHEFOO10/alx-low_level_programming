#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_buffer - create buffer for the source file.
 *
 * @filename: name of the file that will be read from.
 *
 * Return: buffer pointer on success, (99) on failure.
 */

char *create_buffer(char *filename)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read to %s\n", filename);
		exit(98);
	}
	return (buffer);
}

/**
 * c_fd - close file.
 *
 * @fd: file descriptor of the file to be closed.
 */
void c_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * check_args - Check if args match required number of args.
 *
 * @a_count: count of args.
 */

void check_args(int *a_count)
{
	if (*a_count != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
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

	check_args(&argc);
	buffer = create_buffer(argv[1]);
	from_f = open(argv[1], O_RDONLY);

	to_f = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		r_from = read(from_f, buffer, 1024);

		if (from_f == -1 || r_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w_to = write(to_f, buffer, r_from);

		if (to_f == -1 || w_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(from_f);
			free(buffer);
			exit(99);
		}

	} while (r_from > 0);

	free(buffer);
	c_fd(from_f);
	c_fd(to_f);
	return (0);
}
