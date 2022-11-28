#include "hash_tables.h"

/**
 * hash_table_get - Returns the value of a element of the hash table
 * Return: Value of the element if success, NULL if it fails
 * @ht: Hash Table
 * @key: Key to search
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (!ht)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	if (!(ht->array)[idx])
		return (NULL);
	tmp = (ht->array)[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
