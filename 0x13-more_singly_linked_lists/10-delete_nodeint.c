#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list.
 * @head: First node
 * @index: Index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *copy = *head;
	listint_t *currently;

	if (*head == NULL)
		return (-1);
	while (copy)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(copy);
			return (1);
		}
		if ((idx + 1) == index)
		{
			currently = copy->next;
			copy->next = currently->next;
			free(currently);
			return (1);
		}
		copy = copy->next;
		idx++;
	}
	return (-1);
}
