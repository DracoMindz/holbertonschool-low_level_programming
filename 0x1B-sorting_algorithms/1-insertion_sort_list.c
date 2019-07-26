#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**                                                                                                       
 * insertion_sort - Function sorts a doubly linked list of integers in ascending order using insertion sort               
 *                                                                                                        
 * @list: list to be sorted                                                                             
 *                                                                                                  
 * Return: void                                                                                           
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *runList = NULL;
    unsigned int count;

    runList = *list;
/*If the value of the head node is */
    if (*list == NULL || *list->n >= *list->prev->n)
        *list->prev = *list;
        *list = list->prev;;
 

    for (count = 0; *list != NULL; count++); /*Node count, list pointer is not pointing to NULL */
        if (list->next >

    
}