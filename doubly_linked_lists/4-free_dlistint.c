#include "lists.h"

/**
* free_dlistint - function that frees a dlistint_t list.
* @head: the dlistint_t list.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
