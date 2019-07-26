#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: character input digit
 *
 * Description: create diagonal line
 * Return: value
 *
 */
void print_diagonal(int n)
{
	int x, s;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (x = 0; x < n; x++)
	{
		for (s = 0; s < x; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
