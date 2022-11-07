#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: head pointer to the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int num = 0;
	list_t *current = h;

	if (!h)
		return (0);

	while (current)
	{
		current = current->next;
		num++;
	}
	return (num);
}
