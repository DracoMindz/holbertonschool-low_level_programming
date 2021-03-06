#include "holberton.h"

/**
 * _strncpy - copies string
 * @dest: destination of copy
 * @src: source array
 * @n: number of items in array
 *
 * Description: copies string
 *
 * Return: dest  value
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *sub = dest;
	int i = 0;

	for (; i < n && *src != '\0'; i++, src++, sub++)
	{
	*sub = *src;
	}
	for (; n > i; i++, sub++)
	{
		*sub = '\0';
	}
	return (dest);
}
