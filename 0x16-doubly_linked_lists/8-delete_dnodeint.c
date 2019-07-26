#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes the node at index
 * @head: double pointer to a list
 * @index: interger
 *
 * Return: 1 for success or -1 for failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (head == NULL || *head ==  NULL)
		return (-1);
	while (count < index)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		count++;
	}
	if (*head == current)
		*head = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	free(current);
	return (1);
}
