#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: string to be key
 * @value: value for the key
 *
 * Return: 1 if all is ok, 0 if something is wrong
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *node = NULL;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	add_node(&ht->array[idx], key, value);
	if (!ht->array[idx])
		return (0);
	return (1);
}

/**
 * add_node - add a node to the hash table
 * @head: first node in the index of the hash table
 * @key: key for the new node
 * @value: value for the key
 *
 * Return: The new node, NULL if something is wrong
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}
