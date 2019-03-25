#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - function frees lists
 * @head: pointer to a list
 *
 * Description: function prints lists
 *
 * Return: new node
 */
void free_listint(listint_t *head)
{
	listint_t *go;

	while (head != NULL)
	{
		go = head;
		head = head->next;
		free(go);
	}
}
