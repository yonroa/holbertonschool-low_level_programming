#include "lists.h"

/**
 * print_dlistint - print all the elements of the nodes
 * @h: First node
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
