#include "lists.h"
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
