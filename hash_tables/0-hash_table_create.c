#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table
* @size: Size of the array
* Return: the new created hash table, or NULL if failure
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;

	for (unsigned long int i = 0; i < size; i++)
	ht->array[i] = NULL;

	return (ht);
}
