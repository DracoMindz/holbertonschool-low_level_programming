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
	size_t nr = 0, nw;
	ssize_t read_now, write_now;


	if (filename == NULL || letters == 0)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	do {
		read_now = read(fd, buff, letters - nr);
		if (read_now < 0)
			return (0);
		if (read_now == 0)
			continue;
		nr += read_now;
		nw = 0;
		do {
			write_now = write(STDOUT_FILENO,
					  buff + nw, read_now - nw);
			if (write_now <= 0)
				return (0);
			nw += write_now;
		} while (nw < (size_t)read_now);
	} while (nr < letters && read_now > 0);
	close(fd);
	free(buff);
	return (nr);
}
