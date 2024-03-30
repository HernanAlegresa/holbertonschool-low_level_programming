#include "lists.h"

/**
* insert_dnodeint_at_index - function inserts a new node at a given position
* @h: the doubly linked list
* @idx: Index where the new node should be added. Index starts at 0.
* @n: value to be stored in the new node
* Return: address of the new node, or NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *node1;

	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (node1 != NULL && count < idx - 1)
	{
		node1 = node1->next;
		count++;
	}

	if (node1 == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = node1->next;
	newnode->prev = node1;

	if (node1->next != NULL)
		node1->next->prev = newnode

	return (newnode);
}
