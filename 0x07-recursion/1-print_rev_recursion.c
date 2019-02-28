#include "holberton.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: pointer
 *
 * Description: function that prints string in reverse
 *
 * Return: value
 */
void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
