#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * array_range - function creates an array of integers
 *
 * @min: minimum of the array
 * @max: maximum of the array
 *
 * Return: pointer
 *
 */
int *array_range(int min, int max)
{
	int *pb;
	int *m;
	int diff = (max - min) + 1;

	if (max < min)
	{
		return (NULL);
	}
	m = pb = malloc(sizeof(int) * diff);
	if (pb == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		*pb = min;
		min++;
		pb++;
	}
	return (m);
}
