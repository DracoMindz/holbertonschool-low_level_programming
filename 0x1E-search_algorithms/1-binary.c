#include "search_algos.h"

/**
 * binary_searcher - function searches for value in array
 *@array: array of values to be searched
 *@first: first element in the array
 *@last: last element in the array
 */

int binary_searcher(int *array, size_t first, size_t last, int value)
{
        size_t a_index;
        int mid;

        printf("Searching in array: ");
        for (a_index = first; a_index <= last; a_index++)
        {
                printf("%d", array[a_index]);
                if (a_index < last)
                        printf(", ");
                if (a_index == last)
                        printf("\n");
        }
        mid = ((last + first) / 2);
        if (array[mid] == value)
                return (mid);
        if (last > first)
        {
                if (value < array[mid])
                        return (binary_searcher(array, first, mid - 1, value));
                else if (value > array[mid])
                        return (binary_searcher(array, mid + 1, last, value));
        }
        return (-1);
}
/**
 * binary_search - searches for a value in array, use Binary search
 * @array: pointer to first element of array
 * @size: number of elements
 * @value: value to find
 * Return: first index of value or NULL
 */
int binary_search(int *array, size_t size, int value)
{
        if (!array)
                return (-1);
        return(binary_searcher(array, 0, size - 1, value));
}
