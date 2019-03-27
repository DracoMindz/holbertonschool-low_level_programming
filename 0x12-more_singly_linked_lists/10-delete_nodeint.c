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
	unsigned int i;

	if (*head == NULL)
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		*head = ptr->next;/* change head */
		free(ptr); /* free old head*/
		return (1);
	}
	for (i = 0; ptr != NULL && i < index - 1; i++)
	{
		ptr = ptr->next;/*previous node*/
	}

	if (ptr == NULL || ptr->next == NULL)
	{
		return (-1);
	}

	head->next = ptr->next->next;

	free(ptr->next);
	ptr->next = next;
	return (0);
}
