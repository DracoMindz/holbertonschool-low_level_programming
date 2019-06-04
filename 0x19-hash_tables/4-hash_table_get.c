#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 *@ht: hash table
 *@key: key looking for
 * Return: value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const char *copy_key;
	unsigned long int index;
	hash_node_t node;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	copy_key = strdup(key);
	index = key_index(key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, copy_key) == 0)
		{
			break;
		}
	node = node->next;
	}
	free(copy_key);
	if (node == NULL)
	{
		return (NULL);
	}
	return (node->value);
}
