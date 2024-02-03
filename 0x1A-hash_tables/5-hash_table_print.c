#include "hash_tables.h"
/**
 * hash_table_print - prints ahash table
 * @ht: hash table to print
 * Return: nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;

	if (ht == NULL)
	{
		printf("{}");
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			printf("'%s': '%s'", current_node->key, current_node->value);
			if (current_node->next != NULL && (i < ht->size - 1))
				printf(", ");

			current_node = current_node->next;
		}
	}
	printf("}\n");
}
