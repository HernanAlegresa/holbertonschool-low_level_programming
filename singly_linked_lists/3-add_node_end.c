#include "lists.h"

/**
* add_node_end - Adds a new node at the end of list_t list
* @head: the list_t list
* @str: The string to be duplicated and set as the str member of the new node.
* Return: address of the new element or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *node;

	int len;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	;

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		node = *head;
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = new_node;
	}

	return (new_node);
}
