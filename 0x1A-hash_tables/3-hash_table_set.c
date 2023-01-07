#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table to be updated
 * @key: key to generate the index
 * @value: value associated with the key
 *
 * Return: 1 if succeeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *valueCopy;
	unsigned long int index, count;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	valueCopy = strdup(value);
	if (!valueCopy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (count = index; ht->array[count]; count++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[count]->value);
			ht->array[count]->value = valueCopy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(valueCopy);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = valueCopy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
