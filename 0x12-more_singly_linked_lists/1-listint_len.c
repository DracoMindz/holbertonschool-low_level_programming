#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include "lists.h"
/**
 * listint_len - function prints length
 * @h: string
 *
 * Description: function prints lists
 * Return: pointer
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *list;

	list = h;

	while (list != NULL)
	{
		i++;
		list = list->next;
	}

	return (i);
}
