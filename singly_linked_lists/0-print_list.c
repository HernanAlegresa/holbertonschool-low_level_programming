#include "lists.h"

/**
* print_list - Print all the elements of a list_t list
* @h: the list_t list
* Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		c++;
	}
	return (c);
}
