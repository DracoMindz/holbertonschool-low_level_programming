#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function executes a function
 * @array: array
 * @size: size
 * @action: pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;
	int i = 0;

	if (action == NULL)
	{
		return;
	}
	if (array == NULL)
	{
		return;
	}
	if (size == 0)
	{
		return;
	}
	for (; n < size; n++)
	{
		action(array[i]);
		i++;
	}

}
