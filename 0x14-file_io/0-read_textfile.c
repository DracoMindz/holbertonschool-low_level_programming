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
	int nR;
	int nW;


	if (filename == NULL)
		return (0);
/*read*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	nR = read(fd, buff, letters);
	if (nR == -1)
		return (0);
/*write*/
	nW = write(1, buff, letters);
	if (nR == -1 || nW != nR)
		return (0);

	close(fd);
	free(buff);
	return (nW);
}
