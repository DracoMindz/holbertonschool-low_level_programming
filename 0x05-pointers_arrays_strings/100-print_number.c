#include "holberton.h"

/**
 * print_number - function prints an integer
 * @n: integer
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	print_unumber((unsigned int) n);
}
/**
 * print_unumber - generates and integer
 *
 * @n: integer
 * Return: void
 */
void print_unumber(undigned int n)
{
	if (n / 10)
		print_unumber(n / 10);
	putchar(n % 10 + '0');
}
