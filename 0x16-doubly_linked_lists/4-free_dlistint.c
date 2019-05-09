#include "lists.h"
/**
 * free_dlistint - function frees doubly linked lists
 * @head: pointer to a list
 *
 * Description: function prints lists
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
