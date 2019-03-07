#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - function allocates memory
 * @b: unsigned int
 *
 * Description: function allocates memory using malloc
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(sizeof(b));
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
