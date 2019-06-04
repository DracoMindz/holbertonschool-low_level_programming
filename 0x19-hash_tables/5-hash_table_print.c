#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to be printed
 *
 * Return: hash table in the order array, list
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
	{
		;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("%s, %s\n", array[i]->key, array[i]->value);
		}
	}
}
