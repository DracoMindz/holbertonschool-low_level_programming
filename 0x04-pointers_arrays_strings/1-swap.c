#include "holberton.h"

/**
 * swap_int - change values
 * @a: pointer, value at &a
 * @b: pointer, value at &b
 *
 * Return: value
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
