#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
* @head: the dlistint_t list
* @index: the index of the node to delete, starting from 0
* Return: 1 if succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}

	for (; index > 0 && node != NULL; index--)
		node = node->next;

	if (node == NULL)
		return (-1);

	if (node->prev != NULL)
		node->prev->next = node->next;

	if (node->next != NULL)
		node->next->prev = node->prev;

	free(node);

	return (1);
}
