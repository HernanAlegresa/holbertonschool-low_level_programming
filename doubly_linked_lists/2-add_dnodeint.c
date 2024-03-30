#include "lists.h"

/**
* add_dnodeint - the function, add new node at beginning of the list
* @head: the dlistint_t list
* @n: n member of the new node
* Return: The address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nodeX;

	nodeX = malloc(sizeof(dlistint_t));

	if (nodeX == NULL)
	{
		return (NULL);
	}

	nodeX->n = n;
	nodeX->prev = NULL;
	nodeX->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = nodeX;
	}

	*head = nodeX;

	return (nodeX);
}
