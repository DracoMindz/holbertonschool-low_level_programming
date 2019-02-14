#include "holberton.h"

/**
 * print_last_digit - writes the last digit
 * @n: The character to print last digit
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int m, p;

	m = (n % 10);
	p = (m * -1);

	if (n < 0)
	{
		_putchar(p + '0');
		return (p);
	}
	else if (n >= 0)
	{
		_putchar(m + '0');
		return (m);
	}
	return (0);

}
