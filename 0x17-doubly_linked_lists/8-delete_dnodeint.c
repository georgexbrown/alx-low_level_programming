#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes node at index of a list
 * @head: pointer to head node
 * @index: position to where node is deleted
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 1;

	if (!*head)
		return (-1);
	current = *head;
	while (current)
	{
		if (i == index)
		{
			if (i == 0)
			{
				if (current->next)
					current->next->prev = NULL;
				*head = current->next;
			}
			else
			{
				if (current->next)
					current->next->prev = current->prev;
				if (current->prev)
					current->prev->next = current->next;
			}
			free(current);
			return (1);
		}
		i++;
		current = current->next;
	}
}
