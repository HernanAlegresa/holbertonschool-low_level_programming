#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: the list_t list
 */

void free_list(list_t *head)
{
	list_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
}
