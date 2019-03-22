#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include "lists.h"
/**
 * print_list - function prints lists
 * @h: string
 *
 * Description: function prints lists
 * Return: pointer
 */
size_t print_list(const list_t *h)
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
		else
		{
			printf("[%d] %s\n", list->len, list->str);
		}
		i++;
		list = list->next;
	}

	return (i);
}
