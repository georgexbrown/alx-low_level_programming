#include "hash_tables.h"

/**
 * hash_djb2 - function that implements the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value generated
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
		hash = ((hash << 5) + hash) + count; /* hash * 33 + count */

	return (hash);
}
