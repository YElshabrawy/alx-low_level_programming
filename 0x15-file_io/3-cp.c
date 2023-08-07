#include "main.h"
/**
 * main - copies the content of a file to another file
 * @ac: num of args
 * @av: array of args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd1, fd2;
	ssize_t bytes;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((bytes = read(fd1, &buf[0], 1024)) > 0)
		if (write(fd2, buf, bytes) != bytes)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	if (bytes == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd1 = close(fd1);
	fd2 = close(fd2);
	if (fd1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[1]), exit(100);
	if (fd2)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[2]), exit(100);
	return (0);
}
