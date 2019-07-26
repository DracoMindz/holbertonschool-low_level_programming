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

	printf("%d\n", argc - 1);
	return (0);
	argv++;
}
