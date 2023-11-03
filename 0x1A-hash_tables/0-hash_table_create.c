#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: array size
 * Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	return (ht);
}