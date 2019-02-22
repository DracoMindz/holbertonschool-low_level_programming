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
	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
