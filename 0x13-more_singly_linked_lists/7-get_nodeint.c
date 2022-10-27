#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list
 * @head: pointer to the head node of the linked list
 * @index: index of the node
 * Return: NULL if node doesn't exist, else, node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL)
	{
		if (index == 0)
			return (head);
		head = head->next;
		index--;
	}
		return (head);
}
