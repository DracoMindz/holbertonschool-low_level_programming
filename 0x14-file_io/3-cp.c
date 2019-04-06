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
	char *file_to, char *file_from, char *buffer;
	ssize_t bytes_read, bytes_written, close_error;

	if (argc != 3)
	{
		dprintf(STUDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd0 = open(file_to, O_WRONGLY | O_CREAT | O_TRUNC, 0664);
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STUDERR_FILENO, "Error: Can't write to %\n", file_from);
		exit(98);
	}
	do {
		bytes_read = read(file_from, buffer, BSIZE);
	if (bytes_read == 0)
		break;
	if (bytes_read == 1)
		if (file_from == NULL || *file_from == '\0')
			return (98);
		bytes_written = write(to, buffer, bytes_read);
	if (bytes_written < 1)
		if (file_to == NULL || *file_to == '\0')
			return (99);
		}
	while (1)
	{
	close_error = close(file_to);
	if (close_error == -1)
		dprintf(STDERR_FILENO, "Can't read from file_to %d", file_to);
	close_error = close(file_from);
	if (close_error == -1)
		dprintf(STDERR_FILENO, "Cant' read from file_from %d", file_from);
	}
	return (0);
}
