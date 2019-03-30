#include "holberton.h"

/**
 * clear_bit - function sets the value of a bit to ) at a given index
 * @n: pointer, input
 * @index: location of value of bit
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == NULL || index > 63)
	{
		return (-1);
	}

	mask = mask << index;

	if ((*n & mask) != 0)
	{
		*n = *n ^ mask;
		return (1);
	}
	return (0);
}
