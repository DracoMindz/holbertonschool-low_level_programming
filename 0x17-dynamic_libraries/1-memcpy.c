#include "holberton.h"

/**
 * _memcpy - copy function
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes of memory to be copied
 *
 * Description: coopy n bytes from one file to the other
 *
 * Return: value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for  (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
