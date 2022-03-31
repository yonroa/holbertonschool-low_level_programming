#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: First node
 * Return: The data of head
 * 0 if head is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *copy = (*head)->next;
	int s;

	if (!head || !*head)
		s = 0;
	else
		s = (*head)->n;
	free(*head);
	*head = copy;
	return (s);
}
