#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: file name
 * @text_content: string to be appended in file
 * Return: 1 on success, -1 on fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (!fd || (fd && !text_content))
		return (-1);
	if (text_content)
		bytes = write(fd, text_content, strlen(text_content));
	return (bytes == -1 ? -1 : 1);
}
