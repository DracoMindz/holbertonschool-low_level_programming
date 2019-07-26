#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function deletes the head node of linked lists
 *@head: list
 *
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *go;
	int x;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
		go = *head;
		x = go->n;
		*head = go->next;
		free(go);

		return (x);
}
