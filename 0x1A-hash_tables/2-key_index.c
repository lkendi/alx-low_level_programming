#include "hash_tables.h"
/**
 * key_index - retrieves the index of a key
 * @key: key to get index of
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should be stored
 * in the array of the hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	unsigned long int hash, idx;

	new_hash_table = malloc(sizeof(hash_table_t));
	new_hash_table->size = size;
	hash = hash_djb2(key);
	idx = hash % size;
	return (idx);

}
