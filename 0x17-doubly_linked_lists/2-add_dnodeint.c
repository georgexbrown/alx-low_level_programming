#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of
 * a doubly linked list.
 * @head: pointer to the head node
 * @n: element to be added to new node
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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
	(*head)->prev = new;
	new->next = *head;
	*head = new;

	return (new);
}
