#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 * of a listint_t list
 * @head: a double pointer to the head node of the struct
 * @n: new element passed to the linked list
 * Return: address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t newNode = NULL;

	newNode = malloc(sizeof(listint_t));
	if (!(newNode))
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
