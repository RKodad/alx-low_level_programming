#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data (n)
 *         or 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *j;
int n;

j = *head;

if (j == NULL)
return (0);

*head = j->next;
n = j->n;
free(j);
return (n);
}
