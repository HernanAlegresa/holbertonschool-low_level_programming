#include "lists.h"

/**
 * list_len - The function
 * @h: the list_t list
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->n;
	}

	return (c);
}
