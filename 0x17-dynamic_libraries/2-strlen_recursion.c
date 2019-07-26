#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer
 *
 * Description: function returns the length of a string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	length++;
	return (1 + _strlen_recursion(++s));
}
