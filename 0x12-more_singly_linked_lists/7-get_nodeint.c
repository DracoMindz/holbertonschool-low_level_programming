#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - check the code for Holberton School students.
 * @head: list
 * @index: index of node strting at 0
 *
 * Return: nth node of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	if (current != NULL)
	{
		if (count == index)
		{
			return (current->n);
			count++;
			current = current->next;
		}
	}
	else
	{
	return (NULL);
	}
}
