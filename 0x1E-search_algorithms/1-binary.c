
int binary_search_helper(int *array, size_t low, size_t high, int value)
{
        size_t a_index;
        int middle;

        printf("Searching in array: ");
        for (a_index = low; a_index <= high; a_index++)
        {
                printf("%d", array[a_index]);
                if (a_index < high)
                        printf(", ");
                if (a_index == high)
                        printf("\n");
        }
        middle = ((high + low) / 2);
        if (array[middle] == value)
                return (middle);
        if (high > low)
        {
                if (value < array[middle])
                        return (binary_search_helper(array, low, middle - 1, value));
                else if (value > array[middle])
                        return (binary_search_helper(array, middle + 1, high, value));
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
        return (binary_search_rec(array, 0, size - 1, value));
}
