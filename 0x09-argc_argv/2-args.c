#include <stdio.h>
#include "holberton.h"

/**
 * main - program prinst a string as a list
 * @argc: count number of arguements
 * @argv: pointer
 *
 * Description: program prints a strings as a list
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
