#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of
 * a doubly linked list
 * @head: pointer to the head node
 * @n: element to be added to new node
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = new;
	new->prev = current;

	return (new);
}
