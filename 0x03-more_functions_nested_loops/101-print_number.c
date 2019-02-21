#include "holberton.h"

/**
 * print_number - print numbers
 * @a: integer
 *
 * Description: will output numbers
 * Return: Always 0.
 */
void print_number(int a)
{
		if (a < 0 && a >= 0)
		{
			_putchar(a / 10 + '0');
			_putchar(a / 100 + '0');
			_putchar(a / 1000 + '0');
			_putchar(a % 10 + '0');
		}
}