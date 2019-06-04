#include "hash_tables.h"

/**
 * hash_table_set - check key to array: update, replace or add elements
 *
 * @ht: hash table
 * @key: key to be added
 * @value: value associated with the key to be added
 *
 * Return: 1 if it succeeds, 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *k_node, *array_node;
	const char *copy_key;
	unsigned long int n = 0, index;

	copy_key = strdup(key);
	index = key_index(key, ht->size);
	array_node = ht->array[index];

	if (ht == NULL || key == NULL)
		return (0);

	if (array_node != NULL)
	{
		if (strcmp(array_node->key, copy_key) == 0)
			break;
		array_node = array_node->next;
	}
	if (array_node == NULL)
	{
		k_node->next = ht->array[index];
		ht->array[index] = k_node;
		k_node->key = strdup(key);
		k_node->value = strdup(value);

	} else
	{
		k_node = calloc(n(sizeof(hash_node_t)));
		if (k_node == NULL)
			return (0);
		k_node->key = strdup(key);
		k_node->value = strdup(value);
	}
	return (1);
}
