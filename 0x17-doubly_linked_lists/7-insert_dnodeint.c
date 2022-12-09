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
	dlistint_t *tmp, *current, *new = NULL;
	unsigned int i = 1;

	current = *h;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else
	{
		if (current)
			while (current->prev)
				current = current->prev;
		while (current)
		{
			if (i == idx)
			{
				if (!current->next)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (!new)
						return (NULL);
					new->n = n;
					tmp = current->next;
					new->prev = current;
					new->next = tmp;
					current->next->prev = new;
					current->next = new;
				}
			}
			i++;
			current = current->next;
		}
	}
	return (new);
}
