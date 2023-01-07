#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly createed hash table or NULL if not successful
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* creates a new hash table */
	hash_table_t *newTable;
	unsigned int i = 0;

	/* allocate memory for hash table */
	newTable = malloc(sizeof(hash_table_t));
	if (!newTable)
		return (NULL);

	newTable->size = size;
	newTable->array = malloc(sizeof(hash_node_t *) * size);
	if (!newTable->array)
		return (NULL);

	for (; i < size; i++)
		newTable->array[i] = NULL;

	return (newTable);
}
