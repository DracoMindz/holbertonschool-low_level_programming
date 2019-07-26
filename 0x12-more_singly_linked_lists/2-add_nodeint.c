#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function adds new node at the beginning of a node
 * @head: pointer to a const list
 * @n: pointer to string of const int
 *
 * Description: function adds new node at the beginning of a list
 *
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	new_node->n = n;
	return (new_node);
}
