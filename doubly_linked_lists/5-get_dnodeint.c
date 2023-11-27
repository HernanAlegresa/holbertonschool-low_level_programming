#include "lists.h"

/**
* get_dnodeint_at_index - the function.
* @head: the dlistint_t list
* @index: index of the node
* Return: A pointer to the nth node, or NULL if the node does not exist.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	dlistint_t *node;

	node = head;

	for (i = 0; i < index && node != NULL; i++)
	{
		node = node->next;
	}

	return (node);
}
