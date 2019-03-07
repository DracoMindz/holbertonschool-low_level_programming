#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - function creates a 2D grid
 *
 * @grid: 2d Array
 * @height: height of array
 *
 * Description: function creates 2D array
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free (grid[y]);
	}
	free(grid);
}
