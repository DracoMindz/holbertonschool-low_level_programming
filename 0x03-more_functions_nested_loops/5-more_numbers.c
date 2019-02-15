#include "holberton.h"

/**
 * more_numbers - print numbers
 *
 * Description - numbers 1 to 14  10x
 *
 * Return: 0
 */

void more_numbers(void)
{
	int a;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
				_putchar((a % 10) + '0');
		}
	}
	_putchar('\n');
}
