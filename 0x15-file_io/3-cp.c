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
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	while ((wread = read(src, &buffer, sizeof(buffer))) > 0)
	{
		if (src == -1 || wread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
			exit(98);
		}
		dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		w_wrote = write(dest, &buffer, wread);
		if (dest == -1 || w_wrote == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
	}
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

