#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

/**
 * bubble_sort - Functino sorts an array of integers in ascending order using Bubble Sort
 *
 * @array: array to be sorted
 * @size: number of elements in an array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
 
     int flag, x;
	 size_t a, b;
	if (array == NULL || size < 2)
		return; 
	for(a = 0; a < size-1; a++)
	{
		flag = 0;
	   	for(b = 0; b < size - 1; b++)
	    {
			if (array[b] > array[b + 1])
            {
				/* printf("got here!!")*/
				x = array[b + 1];
		   		array[b + 1] = array[b];
		   		array[b] = x;
				print_array(array, size);
				flag = -1;
			}
		}
		if (flag == 0)
			return;
		b = 0;
    }
}
    
  

