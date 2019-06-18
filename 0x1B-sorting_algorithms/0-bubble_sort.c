#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
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
 
         int a, b, x;
	 
	 for(a = 0; a < size-1; a++);
	 {
	   for(b = 0; b < size - b - 1; b++)
	     {
	       if(array[b] > array[b - 1])
		 {
		   x = array[b];
		   array[b] = array[b - 1];
		   array[b-1] = x;
		 }
	     }
	 }
}

    
  

