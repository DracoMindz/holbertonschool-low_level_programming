#include "hash_tables.h"

/**
 * hash_table_create - create hash tabler
 * @size: size of the array
 *
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *result = malloc(sizeof(hash_table_t));

	if (result == NULL)
		return (NULL);

	result->size = size;

	result->array = malloc(sizeof(hash_node_t *) * size);
	if (result->array == NULL )
		return (NULL);

	return (result);
}
