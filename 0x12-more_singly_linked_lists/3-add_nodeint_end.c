#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - function adds new node at the end
 * @head: string
 * @n: pointer to constant int
 *
 * Description: function adds new node at the end
 * Return: address of new elelment or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));
	last_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
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

	}
	last_node->n = n;

	return (last_node);
}
