#include  "lists.h"
/**
 * add_dnodeint - function adds new node at the beginning of a node
 * @head: pointer to a const list
 * @n: pointer to string of const int
 *
 * Description: function adds new node at the beginning of a list
 *
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	new_node->n = n;
	return (new_node);
}
