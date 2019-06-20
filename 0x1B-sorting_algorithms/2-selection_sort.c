#include "sort.h"

/**selection_sort - select parts of array to be sorted 
 * @array: to be sorted
 * @size: number of items in the array
 * Return: void
 * 
*/
void selection_sort(int *array, size_t size);
{
    size_t a, b, c;
    int temp;
    
    if (size < 2)
        return;
    for (a = 0; a < size - 1; a++)
    { 
        c = a
        for (b = a + 1; b < size; b++)
        {
            if (array[b] < array[c])
            {
            c = b;
            }
        }

        if ( c != a)
        {
            temp  = array[a];
            array[a] = array[c];
            array[c] = temp;
            print_array(array, size);
        }   
    }   
}