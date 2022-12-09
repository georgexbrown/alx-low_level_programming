#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given index
 * @h: pointer to head node
 * @idx: position to where node is inserted
 * @n: element to be added to list
 *
 * Return: address of newly inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *current, *new;
	unsigned int i = 0;

	if (!*h)
		return (NULL);
	if (!*h && idx != 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	current = *h;
	while (current)
	{
		if (i == idx - 1)
		{
			tmp = current->next;
			current->next = new;
			new->prev = current;
			new->next = tmp;

			return (new);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
