#include "main.h"
/**
 * read_textfile - reads content of file
 * @filename: file name
 * @letters: num of letters to be read
 * Return - the actual letters that has been read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[1024 * 8];

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes = read(fd, &buf[0], letters);
	printf("\n[%ld]\n", bytes);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
