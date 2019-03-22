#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function frees lists
 * @head: pointer to a list
 *
 * Description: function prints lists
 *
 * Return: new node
 */
void free_list(list_t *head)
{
	list_t *go;

	while (head != NULL)
	{
		go = head;
		head = head->next;
		free(go->str);
		free(go);
	}
}
