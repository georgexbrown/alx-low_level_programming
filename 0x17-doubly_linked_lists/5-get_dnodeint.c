#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a doubly linked list
 * @head: pointer to head of node
 * @index: position of nth node to be returned starting from 0
 *
 * Return: nth node at position index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;
	while (current)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
	return (NULL);
}
