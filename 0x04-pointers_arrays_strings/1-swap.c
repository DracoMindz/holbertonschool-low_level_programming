#include "holberton.h"

/**
 * reset_to_98 - reset value to 98
 * @*n: pointer, valuse at &n
 *
 * Description: function will change the value of  *n
 *
 * Return: value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	assert(*a == 42);
	assert(*b == 98);
}
