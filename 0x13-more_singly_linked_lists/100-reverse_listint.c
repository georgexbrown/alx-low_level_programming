#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;

	listint_t *new;

	prev = NULL;
	new = NULL;

	while (*head != NULL)

	{

		new = (*head)->next;

		(*head)->next = prev;

		prev = *head;

		*head = new;

	}

	*head = prev;

	return (*head);

}
