#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: head pointer to the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int num = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
