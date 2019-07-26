#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print from number to 98
 * @n: integer
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n++);
	}
	while (n > 98)
	{
		printf("%d, ", n--);
	}
	if (n == 98)
	{
		printf("%d, ", n);
	}
	printf("\n");
}
