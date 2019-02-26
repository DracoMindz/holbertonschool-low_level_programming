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
	char *top = haystack;
	char *point = needle;

	for (top = 0; *haystack != '\0'; top++)
	{
		for (point = 0; *needle != '\0'; point++)
		{
			while (*haystack && *point && *haystack == *point)
			{
				return (point);
				haystack++;
			}
			if (point == '\0')
			{
				return (haystack);
			}
		}
	}
	return (0);
}
