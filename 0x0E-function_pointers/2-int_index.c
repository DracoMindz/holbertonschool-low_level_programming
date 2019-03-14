#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function searches for an integer
 * @array: array of elelments to be used
 * @size: size of the array
 * @cmp: pointer to function that compares values
 *
 * Description: function function searches for an integer
 *
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	for (; n < size; n++)
	{
		if (cmp(array[n]) != 0)
		{
			return (n);
		}

	}
	return (-1);
}
