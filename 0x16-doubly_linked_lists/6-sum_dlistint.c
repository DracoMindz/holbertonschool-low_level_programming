#include   "lists.h"

/**
 * sum_dlistint - function returns sum of all data
 * @head: list of integers
 *
 * Return: data
 */
int sum_dlistint(dlistint_t *head)
{
	int data = 0;
	dlistint_t *arrow;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		arrow = head;
		head = arrow->next;
		data += arrow->n;
	}

	return (data);
}
