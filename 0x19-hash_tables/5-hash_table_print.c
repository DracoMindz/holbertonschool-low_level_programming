#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to be printed
 *
 * Return: hash table in the order array, list
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	node = ht->array[0];
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		for (; node != NULL; node = node->next)
		{
			if (j == 1)
			printf(",");
			printf("'%s': '%s'", node->key, node->value);
			j = 1;
		}
	}
	puts("}");
}
