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
	listint_t *go = *head;
	int x = go->n;

	if (go == NULL)
	{
		return (0);
	}
	else
	{
		go = go->next;
		free(*head);
		*head = go;
	}
		return (x);
}
