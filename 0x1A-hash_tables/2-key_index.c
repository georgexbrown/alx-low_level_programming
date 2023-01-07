#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key using the 
 * 		djb2 algorithm
 * @key: key to determine the index
 * @size: size of the array of the hash table
 *
 * Return: index to array of the hash table
 * Description: Uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
