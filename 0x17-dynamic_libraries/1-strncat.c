#include "holberton.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 *
 * Description: concatenates n bytes for src
 *
 * Return: Description of the returned value
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}
	if (src[b] >= n)
	{
		dest[a] = '\0';
	}

	return (dest);
}
