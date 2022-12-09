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
	unsigned int i = 1;

	if (!*h)
		return (NULL);
	if (!*h && idx != 0)
		return (NULL);

	current = *h;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (current)
	{
		if (i == idx)
		{
			if (!current->next)
			{
				new = add_dnodeint_end(h, n);
				return (new);
			}

			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			tmp = current->next;
			new->prev = current;
			new->next = tmp;
			current->next = new;
			current->next->prev = new;

			return (new);
		}
		i++;
		current = current->next;
	}
}