#include "holberton.h"

/**
 * get_bit - check the code for Holberton School students.
 * @n: unsigned long int
 * @index: location
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;
	unsigned long int binaryNum[1025];

	if (index > 63)
	{
		return (-1);
	}
	while (n > 0)
	{
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	if (binaryNum[index] == 1)
	{
		return (1);
	}

	return (0);
}
