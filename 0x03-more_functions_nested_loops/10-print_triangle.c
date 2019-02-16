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
		for (x = 0; x < size - y; x++)
		{
			_putchar(' ');
		}
		for (z = 0; z <= size - x; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
