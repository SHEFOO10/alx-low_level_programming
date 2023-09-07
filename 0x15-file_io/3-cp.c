#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Entry Point
 *
 * @argc: arguments count.
 * @argv: arguments array.
 *
 * Return: (0) On success, various numbers if Errors occured.
 */
int main(int argc, char **argv)
{
	int src, dest, wread = 0, w_wrote = 0;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		custom_exit(97, NULL);

	src = open(argv[1], O_RDONLY);
	if (src == -1)
		custom_exit(98, argv[1]);

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
		custom_exit(99, argv[2]);

	wread = read(src, &buffer, sizeof(buffer));
	do {
		if (wread == -1)
			custom_exit(98, argv[1]);

		w_wrote = write(dest, &buffer, wread);
		if (w_wrote == -1)
			custom_exit(99, argv[2]);
	} while ((wread = read(src, &buffer, sizeof(buffer))) > 0);
	close_file(&src);
	close_file(&dest);
	return (0);
}
/**
 * close_file - closes files.
 *
 * @fd: file discriptor.
 *
 */

void close_file(int *fd)
{
	if (close(*fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", *fd);
		exit(100);
	}
}

/**
 * custom_exit - exit with code and print error message.
 *
 * @code: exit code.
 * @err: error message.
 *
 */

void custom_exit(int code, char *err)
{
	switch (code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", err);
			exit(98);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s", err);
			exit(99);
	}
}
