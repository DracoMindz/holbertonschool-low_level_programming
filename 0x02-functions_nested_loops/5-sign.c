#include "holberton.h"

/**
 * print_sign - determine sign of integer
 * @n: Prints the sign of a number.
 *
 * Description: Determine sign of integer
 *
 * Return: Three values 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

	return (0);
}
