#include "hash_tables.h"

/**
 * hash_table_set - Set the value of a hash from a key
 * Return: 1 on success
 * @ht: Hash Table
 * @key: key
 * @value: Value to store
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tmp;
	char *key_dup, *value_dup;
	unsigned long int idx;

	if (!ht)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (!(ht->array)[idx])
	{
		new = malloc(sizeof(hash_node_t));
		if (!new)
			return (0);
		key_dup = strdup(key);
		new->key = key_dup;
		value_dup = strdup(value);
		new->value = value_dup;
		new->next = NULL;
		ht->array[idx] = new;
		free(key_dup);
		free(value_dup);
	}
	else
	{
		tmp = (ht->array)[idx];
		if (strcmp(tmp->key, key) == 0)
			tmp->value = strdup(value);
		else
		{
			new = malloc(sizeof(hash_node_t));
			if (!new)
				return (0);
			key_dup = strdup(key);
			new->key = key_dup;
			value_dup = strdup(value);
			new->value = value_dup;
			new->next = tmp;
			(ht->array)[idx] = new;
			free(key_dup);
			free(value_dup);
		}
	}
	free(key_dup);
	free(value_dup);
	return (1);
}
