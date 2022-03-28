#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: First node
 */
void free_list(list_t *head)
{
	list_t *copy;

	while (head != NULL)
	{
		copy = head->next;
		free(head->str);
		free(head);
		head = copy;
	}
}
