#include "holberton.h"

/**
 * reset_to_98 - reset value to 98
 * @n: pointer, valuse at &n
 *
 * Return: value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
