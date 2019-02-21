#include "holberton.h"

/**
 * _strcpy - copies string pointed to src
 * @dest: new location of string
 * @src: original location of string
 *
 * Description: copy string from one place to another
 *
 * Return: value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
