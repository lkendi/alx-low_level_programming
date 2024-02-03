#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table
 *
 * @ht: hash table to add or update the key/value to
 * @key: key (cannot be an empty string)
 * @value: value associated with the key
 * (value must be duplicated and cannot be empty)
 *
 * Return: 1 if succeeded, otherwise 0
 *
 * In case of collision, add the new node at the beginning of the list
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node = NULL;
	hash_node_t *current;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	if (strcmp(key, "") == 0 || strcmp(value, "") == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current != NULL)
	{
		/*Key found, update the value*/
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	/*Key not found, create ad new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
