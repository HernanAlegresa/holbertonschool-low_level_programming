#include "hash_tables.h"

/**
* key_index - Gives you the index of a key
* @key: The key string
* @size: Size of the array of the hash table
* Return: The index at which the value pair should be stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hv;

	if (key == NULL || size == 0)
		return (0);

	hv = hash_djb2(key);
	return (hv % size);
}
