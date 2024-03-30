#include "lists.h"

/**
 * sum_dlistint - the function that sums all data
 * @head: the dlistint_t list
 * Return: The sum of all the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
