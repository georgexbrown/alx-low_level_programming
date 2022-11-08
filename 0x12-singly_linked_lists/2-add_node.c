#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: pointer to head of list
 * @str: element passed to the node
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	list_t *tmp = NULL;

	newNode = malloc(sizeof(list_t));
	if (!(new))
		return (NULL);
	newNode->str = strdup(str);
	newNode->next = *head;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	tmp = *head;
	*head = newest;
	newest->next = tmp;
	return (*head);
}
