#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function prints lists
 * @head: string
 * @str: pointer to constant char
 *
 * Description: function prints lists
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	last_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
/*checking to see if the string is NULL.*/
	if (new_node->str != '\0')
	{
/*check the string for '\0'*/
		for (i = 0; new_node->str[i] != '\0'; i++)
		{
			;
		}
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->len = i;
	new_node->next = NULL;
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;

	return (last_node);
}
