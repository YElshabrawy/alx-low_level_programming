#include "hash_tables.h"

/**
 * key_index - returns index of a given key after hashing
 * @key: string for a given key
 * @size: the size of the hash table array
 * Return: index of key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return hash_djb2(key) % size;
}
