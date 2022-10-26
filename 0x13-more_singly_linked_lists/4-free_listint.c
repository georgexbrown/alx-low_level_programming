#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer to the head node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
