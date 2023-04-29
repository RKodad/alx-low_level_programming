#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *x;

	a = NULL;
	x = NULL;

	while (*head != NULL)
	{
		x = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = x;
	}

	*head = a;
	return (*head);
}
