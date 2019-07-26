#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include "lists.h"
/**
 * list_len - function prints lists
 * @h: string
 *
 * Description: function prints lists
 * Return: pointer
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *list;

	list = h;

	while (list != NULL)
	{
		if (list->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		i++;
		list = list->next;
	}

	return (i);
}
