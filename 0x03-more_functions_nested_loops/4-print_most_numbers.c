#include "holberton.h"

/**
 * print_most_numbers - print numbers
 *
 * Description: print not all numbers
 *
 * Return: value
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
