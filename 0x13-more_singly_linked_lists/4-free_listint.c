#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: First node
 */
void free_listint(listint_t *head)
{
	listint_t *copy;

	while (head != NULL)
	{
		copy = head->next;
		free(head);
		head = copy;
	}
}
