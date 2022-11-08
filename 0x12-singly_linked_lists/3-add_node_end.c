#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list
 * @head: pointer to head of list
 * @str: element passed to the linked list
 *
 * Return: address to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *newNode = NULL;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newNode;
	return (tmp->next);
}
