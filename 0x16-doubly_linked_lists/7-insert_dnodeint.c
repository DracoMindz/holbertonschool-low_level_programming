#include "lists.h"
#include <unistd.h>

size_t dlistint_len(const dlistint_t *h);

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position.
 * @h: pointer to list of ints at index
 * @idx: index of node
 * @n: data
 *
 j* Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t **h2 = h;
	dlistint_t *pointerNode;
	dlistint_t *newNode;
        size_t length;
        unsigned int count;

	if (h == NULL) /*If head points to NULLif no linked list exists*/
		return (NULL);
	if (idx == 0 || *h == NULL)
	{
		newNode = add_dnodeint(h2, n);
		return (newNode);
	}
	pointerNode = *h;
/*	if (pointerNode == NULL)
	return (NULL);*/
        length = dlistint_len(pointerNode);
        if (idx > length)
		return (NULL);
        for (count = 1; count + 1 <= idx && pointerNode != NULL; count++)
	{
		pointerNode = pointerNode->next;
	}
	/*printf("%d\n", count);
	  printf("%d\n", idx);*/
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = pointerNode->next;
	pointerNode->next = newNode;
	newNode->prev = pointerNode;
	if (newNode->next != NULL)
		newNode->next->prev = newNode;
	return (newNode);
}



/**
 * dlistint_len - function returns number of elements in a linked list
 * @h: string
 *
 * Return: number of eliments linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int index = 1;
	const dlistint_t *list;

	list = h;

	while (list != NULL)
	{
		if (list->next == NULL)
		{
			return (index);
		}
		index++;
		list = list->next;

	}
	return (0);
}
