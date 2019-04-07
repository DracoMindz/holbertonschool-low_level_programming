#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"
#define BSIZE 1024
/**
 * error97 - funtion print void 97
 *
 * Return: void
 */
void error97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * error99 - function print void 99
 * @file_to: pointer
 *
 * Return: void
 */
void error99(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}
/**
 * error98 - function prints error 98
 * @file_from: Pointer
 *
 * Return: void
 */
void error98(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_from);
	exit(98);
}
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
		void error97();
	file_from = argv[1];
	file_to = argv[2];
	fd0 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		 error98(file_from);
	do {
		bytes_read = read(file_from, buffer, BSIZE);
		if (bytes_read == -1)
			error98(file_from);
		if (bytes_read == 0)
		{
			break;
		}
		bytes_written = write(to, buffer, bytes_read);
		if (bytes_written < 1)
		{
			error99(file_to);
		}
	} while (1);
	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file_to %d", file_to);
		return (100);
	}
	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Cant' read from file_from %d", file_from);
		return (100);
	}
	return (0);
}
