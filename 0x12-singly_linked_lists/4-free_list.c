#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
