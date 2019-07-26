#include "holberton.h"

/**
 * print_number - print numbers
 * @n: integer
 *
 * Description: will output numbers
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	m = (unsigned int)n;
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar(m % 10 + '0');
}
