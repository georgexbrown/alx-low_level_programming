#include "lists.h"

/**
 * print_dlistint - function that prints all elements of a doubly linked list
 * @h: pointer to the head node
 *
 * Return: number of elements on list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
