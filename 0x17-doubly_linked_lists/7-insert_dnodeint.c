#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Fisrt node
 * @idx: Position to insert the node
 * @n: Element of the new node
 * Return: The address otf the new node or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = *h;
	dlistint_t *tmp;
	unsigned int index = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (current)
	{
		if ((index + 1) == idx)
		{
			tmp = current->next;
			current->next = new;
			new->prev = current;
			new->next = tmp;
			tmp->prev = new;
			return (new);
		}
		index++;
		current = current->next;
	}
	free(new);
	return (NULL);
}
