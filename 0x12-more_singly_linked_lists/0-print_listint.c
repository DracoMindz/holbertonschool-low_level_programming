#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints a lists
 * @h: pointer to a string
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *list;

	list = h;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		i++;
		list = list->next;
	}

	return (i);
}
