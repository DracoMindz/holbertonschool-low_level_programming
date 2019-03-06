#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer
 *
 */

int **alloc_grid(int width, int height)
{
	int x = 0;
	int y = 0;
	int **m;

	if ((width < 1) || (height < 1))
	{
		return (NULL);
	}
	m = malloc(height * sizeof(int *));
	for (y = 0; y < height; y++)
	{
		m[y] = malloc(width * sizeof(int));
		if (m[y] == NULL)
		{
			free(m);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			m[y][x] = 0;
		}
	}
	return (m);
}
