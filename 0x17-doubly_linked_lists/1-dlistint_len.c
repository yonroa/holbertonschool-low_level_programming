#include "lists.h"

/**
 * dlistint_len - count the number of nodes
 * @h: first node
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
