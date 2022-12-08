#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    int i = 0;
    
    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        i++;
    }
    return (i);
}

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new, *current;
    
    new = malloc(sizeof(dlistint_t));
    if (!new)
    {
        dprintf(2, "Error: Can't malloc\n");
        return NULL;
    }
    new->n = n;
    new->prev = NULL;
    new->next = NULL;

    if (!*head)
    {
        *head = new;
        return *head;
    }
    current = *head;
    while (current->next)
    {
        current = current->next;
       /**(*head)->next = new;
        new->prev = *head;
        *head = new;
   */ }
    current->next = new;
    new->prev = *head;
    return (*head);
    
}

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
