#include "holberton.h"

/**
 * _strchr - locates character in a string
 * @s: string pointer
 * @c: character to locate in string
 *
 * Description: function locates a character in stringr
 *
 * Return: value
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != c)
			return ('\0');
	}
	return (s);
}
