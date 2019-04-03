#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>

#include <fcntl.h>
#include <unistd.h>

#include "holberton.h"

/**
 * read_textfile - function reads text file prints to POSIX standard output
 * @filename: pointer
 * @letters: number of letters
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	int nr;
	int nw;


	if (filename == NULL)
		return (0);
/*read*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	nr = read(fd, buff, letters);
	if (nr == -1)
	return (0);
/*write*/
	nw = write(1, buff, letters);
	if (nr == -1 || nw != nr)
	return (0);

	free(buff);
	close(fd);
	return (nw);
}
