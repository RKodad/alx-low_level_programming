#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *c = h;
	size_t s = 0;

	while (c != NULL)
	{
		printf("%d\n", c->n);
		s += 1;
		c = c->next;
	}
	return (s);
}
