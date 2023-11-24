#include "lists.h"

/**
* add_node_end - Adds a new node at the end of list_t list
* @head: the list_t list
* @str: The string to be duplicated and set as the str member of the new node.
* Return: address of the new element or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node2, *t;

	if (str == NULL)
		return (NULL);

	node2 = malloc(sizeof(list_t));
	if (node2 == NULL)
		return (NULL);

	node2->str = strdup(str);
	if (node2->str == NULL)
	{
		free(node2);
		return (NULL);
	}

	node2->len = strlen(str);
	node2->next = NULL;

	if (*head == NULL)
	{
		*head = node2;
	}
	else
	{
		temp = *head;
		while (t->next != NULL)
			t = t->next;

	t->next = node2;
}

	return (node2);
}
