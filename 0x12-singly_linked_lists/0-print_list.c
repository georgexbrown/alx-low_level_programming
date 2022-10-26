#include "lists.h"

/**
 * print_list - function that prints all elements of a list
 * @h: constant argument parameter of type list
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	int *length;
	char *string;
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			length = h->len;
			string = h->str;
			printf("[%d] %s\n", length, string);
		}
		h = h->next;
		count++;
	}
	return (count);
}
