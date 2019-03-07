#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - function allocates memory
 * @b: unsigned int
 *
 * Description: function allocates memeory using malloc
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *str;

	for (b = 0; str[b] != '\0'; b++)
	{
		str = (int *)malloc(sizeof(b + 1));
		return (str);
	}
	if (*str == NULL)
	{
		exit(98);
	}
	else
	{
		return (str);
	}
}
