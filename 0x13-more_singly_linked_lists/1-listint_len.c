#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: First node
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
