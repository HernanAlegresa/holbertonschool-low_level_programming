#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list
* @head: A pointer to a pointer to the head of the list_t list
* @str: The string to be duplicated and set as the str member of the new node
* Return: The address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	int len;

	if (str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	;

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	node->len = len;
	node->next = *head;
	*head = node;

	return (node);
}
