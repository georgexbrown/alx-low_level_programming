#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

		while (head)
		{
			tmp = head;
			free(tmp->str);
			head = head->next;
			free(tmp);
		}
}
