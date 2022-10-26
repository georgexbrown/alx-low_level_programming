#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 * of a listint_t list
 * @head: pointer to the head node of the struct
 * @n: new element passed to the list
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode = NULL;
	listint_t *tmp = NULL;

	if (!head)
		return (NULL);

	endNode = malloc(sizeof(listint_t));
	if (!(endNode))
		return (NULL);
	endNode->n = n;
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
		return (*head);
	}

	tmp = *head;

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = endNode;
	return (tmp->next);
}
