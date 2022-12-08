#include "lists.h"

/**
 * free_dlistint - function that frees a doubly linked list
 * @head: pointer to the head node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
