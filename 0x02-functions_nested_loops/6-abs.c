#include "holberton.h"
/**
 * _abs - writes the absolute value
 * @n: The character to print absolute value
 *
 * Return: 0
 */
int _abs(int n)
{

	if (n  > 0)
	{
		_putchar(n + '0');
	}
		else if (n < 0)
		{
			_putchar(n * -1);
		}
		else
		{
			_putchar('0');
		}

	return (0);
}
