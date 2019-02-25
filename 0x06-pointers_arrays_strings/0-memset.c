#include "holberton.h"

/**
 * _memset - fill memeory with a constant byte
 * @s: pointer
 * @b: constant number of bytes
 * @n: number of bytes of memory to be filled
 *
 * Description: function fills memeory with a constant byte
 *
 * Return: value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for  (x = 0; x < n; x++)
	{
		s[x] =  b;
	}
	return (s);
}
