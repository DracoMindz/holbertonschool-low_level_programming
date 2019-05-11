#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position.
 * @h: pointer to list of ints at index
 * @idx: index of node
 * @n: data
 *
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t **h2 = h;
	dlistint_t *pointerNode;
	dlistint_t *newNode;

	unsigned int count = 0;

	if (h == NULL) /*If head points to NULLif no linked list exists*/
		return (NULL);
	if (idx == 0 || *h == NULL)
	{
		newNode = add_dnodeint(h2, n);
		return (newNode);
	}
	pointerNode = *h;
	/*if (pointerNode == NULL)
	  return (NULL);*/
	for (; count < idx - 1 && pointerNode != NULL; count++)
	{
		pointerNode = pointerNode->next;
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = pointerNode->next;
	pointerNode->next = newNode;
	newNode->prev = pointerNode;
	if (newNode->next != NULL)
		newNode->next->prev = newNode;
	/**h = newNode;*/

	return (newNode);
}
