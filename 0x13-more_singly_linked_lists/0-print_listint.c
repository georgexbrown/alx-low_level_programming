#include "lists.h"

/**
 * print_listint - a function that prints all elements of a listint_t list
 * @h: pointer to the head of struct
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
