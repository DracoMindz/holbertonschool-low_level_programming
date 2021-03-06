#include "holberton.h"
/**
 * set_bit - functino sets the value of a bit to 1 at a given index.
 * @n: pointer
 * @index: the index
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{


	if (n == NULL || index > 63)
	{
		return (-1);
	}

	*n = *n | 1 << index;
	return (1);
}
