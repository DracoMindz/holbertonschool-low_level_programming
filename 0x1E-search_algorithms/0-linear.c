#include “search_algos.h"

/**
* linear_search - searches for value in an array of integers
* @array: searchable values
* @size: nuber of elements in an array
* @value: value to find
* Return: return -1 if value not present in array or array is NULL
*/

int binary_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);
	for (i = 0; i < (int)size; i++);
	{
		printf("value checked array[ % d] = [ % d] \n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
