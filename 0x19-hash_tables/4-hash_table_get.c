#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 *@ht: hash table
 *@key: key looking for
 * Return: value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
	node = node->next;
	}
		return (NULL);
}
