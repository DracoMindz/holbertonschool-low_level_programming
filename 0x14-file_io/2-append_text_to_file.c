#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: name of file
 * @text_content: is the NULL terminated string to be add to end of file
 *
 * Return: 1 for success and -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		while (text_content[i])
		{
			i++;
		}
		len = write(fd, text_content, i);
		if (len == -1)
			return (-1);
		close(fd);
	}
	return (1);
}
