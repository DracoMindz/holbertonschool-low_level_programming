#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	const list_t *list = h;

	while (list != NULL)
	{
		if (list->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, list->str);
		}
		list = list->next;
		i++;
	}

	return (i);
}
