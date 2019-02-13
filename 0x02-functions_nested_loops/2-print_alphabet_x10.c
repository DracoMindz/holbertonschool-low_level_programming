#include "holberton.h"
/**
 * print_alphabet_x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
