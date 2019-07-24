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
	unsigned long int index;

	k_node = NULL;
	array_node = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	array_node = ht->array[index];

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if array_node != NULL && strcmp(array_node->key, key) == 0)
	{
		array_node->value = strdup(value);
		return (1);
	}
	k_node = calloc(1, sizeof(hash_node_t));
	if (k_node == NULL)
		return (0);
	k_node->key = strdup(key);
	k_node->value = strdup(value);
	k_node->next  = array_node;
	array_node = k_node;

	return (1);
}
