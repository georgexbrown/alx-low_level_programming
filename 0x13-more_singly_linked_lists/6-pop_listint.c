#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data
 * @head: pointer to the head node of the list
 * Return: the head node's data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (*head == NULL)
		return (0);
	tmp = *head;
	(*head) = (*head)->next;
	num = tmp->n;
	free(tmp);
	tmp = NULL;
	return (num);
}
