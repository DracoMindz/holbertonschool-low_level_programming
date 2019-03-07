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

	for (b = 0; str[b] != '\0'; b++)
	{
		str = malloc(sizeof(b));
		return (str);
	}
	if (str == NULL)
	{
		exit(98);
	}
	else
	{
		return (str);
	}
}
