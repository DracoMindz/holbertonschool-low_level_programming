#include "holberton.h"

/**
 * _strlen - compute the length of string
 * @s: input
 *
 * Description: determine length of string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
