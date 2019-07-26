#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function prints lists
 * @head: pointer to a list
 * @str: pointer to string of const char
 *
 * Description: function prints lists
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
/*initializing the elements in the new_node*/
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
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
