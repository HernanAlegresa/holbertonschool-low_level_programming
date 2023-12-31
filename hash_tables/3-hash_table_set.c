#include "hash_tables.h"

/**
* hash_table_set - Adds an element to the hash table
* @ht: The hash table
* @key: The key string
* @value: The value of the key
* Return: 1 if it succeeded, or 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *cvalue;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cvalue = strdup(value);
	if (cvalue == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cvalue;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(cvalue);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = cvalue;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
