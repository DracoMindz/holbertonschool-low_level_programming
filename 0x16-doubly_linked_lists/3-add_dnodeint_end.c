#include "lists.h"
/**
 * add_dnodeint_end - function adds new node at the end
 * @head: string
 * @n: pointer to constant int
 *
 * Description: function adds new node at the end
 * Return: address of new elelment or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node;

	new_node = malloc(sizeof(dlistint_t));
	last_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		last_node->next = new_node;
		new_node->prev = last_node;

	}
	return (last_node);
}
