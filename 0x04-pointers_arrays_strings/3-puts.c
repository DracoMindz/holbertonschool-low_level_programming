#include "holberton.h"

/**
 * puts - prints string
 * @*str: pointer for str
 *
 * Description: function will print string using pointer
 *
 * Return: string
 */
void _puts(char *str)
{
	putchar(*str);
	putchar('\n');
}
