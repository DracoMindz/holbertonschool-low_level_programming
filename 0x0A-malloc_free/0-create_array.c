#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - program creates an array of chars, intializes with char
 * @size: size of int
 * @c: variable
 *
 * Description: function creates array of chars initializes with specific char
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size * sizeof(char));
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
