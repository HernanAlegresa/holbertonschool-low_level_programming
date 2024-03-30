#include "lists.h"

/**
* print_dlistint - the function
* @h: the dlistint_t list.
* Return: the number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}

	return (0);
}
