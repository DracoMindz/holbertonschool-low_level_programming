#include "lists.h"
/**
 * get_dnodeint_at_index - function returns nth node of a dlinked list
 * @head: list
 * @index: index of node strting at 0
 *
 * Return: nth node of list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

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
