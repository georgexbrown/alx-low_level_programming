#include "./hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Return: nothing
 * Description: Key/value pairs are printed in order they appear in hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int count;
	unsigned char commaFlag = 0;

	if (!ht)
		return;

	printf("{");
	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count] != NULL)
		{
			if (commaFlag == 1)
				printf(", ");

			node = ht->array[count];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			commaFlag = 1;
		}
	}
	printf("}\n");
}
