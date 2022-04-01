#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: First node
 * Return: The data of head
 * 0 if head is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *copy;
	int s;

	if (!head || !*head)
		return (0);
	s = (*head)->n;
	copy = (*head)->next;
	free(*head);
	*head = copy;
	return (s);
}
