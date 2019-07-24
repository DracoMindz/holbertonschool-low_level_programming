#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: const list of ints
 *
 * Description: prints all the elements of a list
 * Return: size_t list
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;
	const dlistint_t *list;

	list = h;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		i++;
		list = list->next;
	}
	return (i);
}
