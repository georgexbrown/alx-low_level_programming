#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to the head node of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *current;

	if (head)
	{
		current = *head;
		while (current)
		{
			tmp = current;
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}
