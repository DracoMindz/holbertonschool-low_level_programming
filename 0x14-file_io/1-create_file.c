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
	int i;
	int n;
	int w;



	if (filename == NULL)
		return (-1);
	if (t == NULL || *t == "")
	fd = open(filename, O_CREAT | O_RDONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	for (i = 0; t[i] != '\0'; i++)
		;
	do {
		n = write(fd, t + w, i - w)
			if (n < 1)
				return (0);
		n += w;
	} while (w < i);
	close(fd);
	return (1);


}
