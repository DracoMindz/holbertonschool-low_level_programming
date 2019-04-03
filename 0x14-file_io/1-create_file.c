#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>

#include <fcntl.h>
#include <unistd.h>

#include "holberton.h"

/**
 * create_file - function creates a file
 * @filename: pointer
 * @text_content: number of letters
 *
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int x;
	int n;



	if (filename == NULL || text_content == NULL)
		return (-1);
/* write*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	for (x = 0; text_content != NULL; x++)
		;

	n = write(fd, text_content, x);
	if (n ==

	close(fd);

	return (0);
}
