#include "holberton.h"

/**
 * print_line - writes the character c to stdout
 * @n: The character to print "_"
 *
 * Return: n or zero; line or no line
 *
 * Description: create a line with the code
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
