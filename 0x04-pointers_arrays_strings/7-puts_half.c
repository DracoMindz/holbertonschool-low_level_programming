#include "holberton.h"

/**
 * puts_half - prints half a string
 * @str: pointer to string
 *
 * Description: print half a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length, half;

	for (length = 0; str[length] != '\0'; length++)
	{
		half = (length + 1) / 2;
	}
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
