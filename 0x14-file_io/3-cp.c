#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"
#define BSIZE 1024
/**
 * main - program copies content of a file to another file
 * @argc: contains arguement passed through program
 * @argv: arguement variable
 *
 * Return: data
 */
int main(int argc, char **argv)
{
	int fd0, fd1, fd2;
	char *file_to, *file_from, *buffer;
	ssize_t bytes_read, bytes_written, close_error;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	if ((fd1 = open(file_from, O_RDONLY)) == -1))
	{
		dprintf(STUDERR_FILENO, "Error: Can't write to %\n", file_from);
		exit(98);
	}
	if ((fd0 = open(file_to, O_WRONGLY | O_CREAT | O_TRUNC, 0664)) == -1)
	{
		dprintf(STUDERR_FILENO, "Error: Can't write to %\n", file_to);
		return (99);
	}
	do{
		bytes_read = read(file_from, buffer, BSIZE);
		if (bytes_read == -1)
		{
			dprintf(STUDERR_FILENO, "Error: Can't write to %\n", file_to);
			return (99);
		}
		if (bytes_read == 0)
		{
			break;
		}
		bytes_written = write(to, buffer, bytes_read);
		if (bytes_written < 1)
		{
			dprintf(STUDERR_FILENO, "Error: Can't write to %\n", file_to);
			return (99);
		}
	} while (1);
	if ((close_error = close(file_to)) == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file_to %d", file_to);
		return (100);
	}
	if (close_error = close(file_from); == -1)
	{
		dprintf(STDERR_FILENO, "Cant' read from file_from %d", file_from);
		return (100);
	}
	return (0);
}

