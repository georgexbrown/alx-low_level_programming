#include "lists.h"

/**
 * listint_len - a function that returns the number of elements of
 * a listint_t list
 * @h: pointer to the head of struct
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
