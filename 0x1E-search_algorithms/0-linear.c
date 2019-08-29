#include “search_algos.h"
/**
 * linear_search - searches for value in an array of integers
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	int m_index;

	if (!array)
		return (-1);
	for (m_index = 0; m_index < (int)size; m_index++)
	{
		printf("value checked array[%d] =[ %d]\n", m_index, array[m_index]);
		if (array[m_index] == value)
		{
			return (m_index);
		}
	}
	return (-1);
}
