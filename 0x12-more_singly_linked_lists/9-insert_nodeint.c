#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at a given position.
 * @head: pointer to list of ints at index
 * @idx: index of node
 * @n: data
 *
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pointerNode;
	listint_t *node;

	unsigned int count = 1;

	if (head == NULL) /*If head points to NULL(if no linked list exists*/
		return (NULL);
	pointerNode = *head;
	if (idx == 0)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);
		node->n = n;
		if (*head == NULL)
		{
			*head = node;
			node->next = NULL;
		}
		else if (*head != NULL)
		{
		node->next = *head;
		*head = node;
		}
		return (node);
	}
	for (; count < idx - 1 && pointerNode != NULL; count++)
	{
		pointerNode = pointerNode->next;
	}
	if (pointerNode == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = pointerNode->next;
	pointerNode->next = node;

	return (node);
}
