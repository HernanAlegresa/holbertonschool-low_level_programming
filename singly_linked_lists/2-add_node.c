#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list
* @head: A pointer to a pointer to the head of the list_t list
* @str: The string to be duplicated and set as the str member of the new node
* Return: The address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node1;

	if (str == NULL)
		return (NULL);

	node1 = malloc(sizeof(list_t));
	if (node1 == NULL)
		return (NULL);
}
