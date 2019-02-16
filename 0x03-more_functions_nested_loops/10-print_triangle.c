#include "holberton.h"

/**
 * print_triangle - creates a triangle with #
 * @size: base of triangle
 *
 * Return: void
 *
 */
void print_triangle(int size)
{
	int y, x, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			z = size - 1;
			if (x < z)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
