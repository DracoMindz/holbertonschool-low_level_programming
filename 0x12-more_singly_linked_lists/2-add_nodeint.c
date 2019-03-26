#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function adds new node at the beginning of a node
 * @head: pointer to a const list
 * @n: pointer to string of const int
 *
 * Description: function adds new node at the beginning of a list
 *
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
/*initializing the elements in the new_node*/
	new_node->n = n
/*checking to see if the string is NULL.*/
	if (new_node->n != '\0')
	{
/*check the string for '\0'*/
		for (i = 0; new_node->n != '\0'; i++)
		{
			;
		}
	}
	new_node->n = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
