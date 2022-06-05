#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int idx = 0, i, l_idx = 0;
	hash_node_t *node = NULL, *last_print = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			last_print = ht->array[i];
	}
	if (last_print != NULL)
		l_idx = key_index((const unsigned char *)last_print->key, ht->size);
	printf("{");
	while (idx <= ht->size)
	{
		node = ht->array[idx];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->next)
				printf(", ");
			node = node->next;
			if (ht->array[idx] != last_print && idx < l_idx)
				printf(", ");
		}
		idx++;
	}
	printf("}\n");
}
