#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all data (n) of
 * a doubly linked list
 * @head: pointer to head node
 *
 * Return: sum of all node's data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
