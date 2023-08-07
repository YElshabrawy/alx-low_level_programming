#include "main.h"
/**
 * create_file - creates a text file w/ content
 * @filename: file name
 * @text_content: string to be included in file
 * Return: 1 on success, -1 on fail
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (!text_content)
	{
		return (1);
	}
	else
	{
		bytes = write(fd, text_content, strlen(text_content));
		return (bytes == -1 ? -1 : 1);
	}
}
