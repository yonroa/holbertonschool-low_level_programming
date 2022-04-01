#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: First node
 * @idx: Index given
 * @n: Int for the node
 * Return: The address of the new node
 * NULL if it failled
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *copy = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (copy && (index < idx))
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		if ((idx - 1) == index)
		{
			new->next = copy->next;
			copy->next = new;
			return (new);
		}
		copy = copy->next;
		index++;
	}
	return (NULL);
}
