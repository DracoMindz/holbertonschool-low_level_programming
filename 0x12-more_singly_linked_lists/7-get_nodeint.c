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
	unsigned int count = 0;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}

	while (count <= index && head != NULL)
	{
		current = head;
		head = current->next;
		count++;
	}
	if (count < index)
	{
		return (NULL);
	}
	return (current);
}
