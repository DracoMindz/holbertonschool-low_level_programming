#include <stdio.h>
#include "holberton.h"

/**
 * main - program counts the arguments passed into it
 * @argc: count number of arguements
 * @argv: pointer
 *
 * Description: program counts the number of arguements passed through it
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (argc = 0; argv[i] != '\0'; argc++)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
