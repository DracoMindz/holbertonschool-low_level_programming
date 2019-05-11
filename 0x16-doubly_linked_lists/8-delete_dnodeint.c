#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes the node at index of linked list.
 * @head: double pointer to a list
 * @index: interger
 *
 * Return: 1 for success or -1 for failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	dlistint_t *previousPtr;

	if (head == NULL)
		return (NULL);
	while (count < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		count++;
	}
	return (head);
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
