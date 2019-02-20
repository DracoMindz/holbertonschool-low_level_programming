#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: pointer to string
 *
 * Description: print string in reverse
 *
 * Return: void
 */
void print_rev(char *s)

{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	length--;
	}
	while (length >= 0)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
