#include "lists.h"

/**
* add_dnodeint_end - the function, adds new node at the end of the list.
* @head: the dlistint_t list.
* @n: value of n member of the new node.
* Return: The address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodeX, *nodeLast;

	if (nodeX == NULL)
	{
		return (NULL);
	}

	nodeX->n = n;
	nodeX->next = NULL;

	if (*head == NULL)
	{
		nodeX->prev = NULL;
		*head = nodeX;
	}

	else
	{
		nodeLast = *head;
		while (nodeLast->next != NULL)
		{
			nodeLast = nodeLast->next;
		}

		nodeLast->next = nodeX;
		nodeX->prev = nodeLast;
	}

	return (nodeX);
}
