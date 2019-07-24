#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function returns sum of all data
 * @head: list of integers
 *
 * Return: data
 */
int sum_listint(listint_t *head)
{
	int data = 0;
	listint_t *arrow;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		arrow = head;
		head = arrow->next;
		data += arrow->n;
	}

	return (data);
}
