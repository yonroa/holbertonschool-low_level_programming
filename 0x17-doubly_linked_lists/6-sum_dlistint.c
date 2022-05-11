#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: first node
 * Return: The sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
