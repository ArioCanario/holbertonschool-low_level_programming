#include "hash_tables.h"

/**
 * key_index - Returns the index of a key
 * Return: Index
 * @size: Size of the hash table
 * @key: Key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
