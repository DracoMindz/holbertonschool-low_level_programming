#include "holberton.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string pointer
 * @needle: string to locate in string
 *
 * Description: function locates a stringt in a string
 *
 * Return: value
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *top  = haystack;
		char *point = needle;

		while (*top && *point && *top  == *point)
		{
			return (point);
			haystack++;
			point++;
		}
		if (point == '\0')
		{
			return (haystack);
		}

	}
	return (0);
}
