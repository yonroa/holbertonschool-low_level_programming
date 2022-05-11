#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: First node
 * @index: Position of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *tmp;
	unsigned int idx = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (current)
	{
		if ((idx + 1) == index)
		{
			tmp = current->next->next;
			free(current->next);
			current->next = tmp;
			tmp->prev = current;
			return (1);
		}
		idx++;
		current = current->next;
	}
	return (-1);
}
