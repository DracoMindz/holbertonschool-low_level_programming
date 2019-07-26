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

	for (; *haystack != '\0'; top++, haystack++)
	{
		for (; *point != '\0' && *top == *point; point++, top++)
			;
		if (*point == '\0')
			return (haystack);
		point = needle;
		top = haystack;

	}
	return (0);
}
