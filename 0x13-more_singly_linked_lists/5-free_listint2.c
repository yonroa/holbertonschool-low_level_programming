#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: First node
 */
void free_listint2(listint_t **head)
{
	listint_t *copy;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		copy = (*head)->next;
		free(*head);
		*head = copy;
	}
	*head = NULL;
}
