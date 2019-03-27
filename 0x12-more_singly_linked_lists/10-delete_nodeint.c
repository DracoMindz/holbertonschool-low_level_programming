#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes the node at index of linked list.
 * @head: double pointer to a list
 * @index: interger
 *
 * Return: 1 for success or -1 for failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *previousPtr;

	if (*head == NULL)
		return (-1);
	for (ptr = *head; ptr != NULL && index > 0; index--)
	{
		previousPtr = ptr;
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		return (-1);
	}
	if (ptr == *head)
		*head = ptr->next;
	else
		previousPtr->next = ptr->next;

	free(ptr);
	return (1);
}
