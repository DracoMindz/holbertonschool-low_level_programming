#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagnals of matrix
 * @a: pointer to string
 * @size: size of the matrix
 *
 * Description: print sum of two diagnols of a square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int y;
	int sum1 = 0;
	int sum2 = 0;

	for (y = 0; y < (size * size); y += (size + 1))
	{
		sum1 += a[y];
	}
	for (y = size - 1; y < (size * size) - (size - 1); y += (size - 1))
	{
		sum2 += a[y];
	}
		printf("%d, %d\n", sum1, sum2);
}
