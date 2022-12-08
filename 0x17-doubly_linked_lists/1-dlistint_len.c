#include "lists.h"

/**
 * dlistint_len - function that returns the no of elements in a
 * doubly linked list
 * @h: pointer to the head node
 *
 * Return: number of elements on list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
