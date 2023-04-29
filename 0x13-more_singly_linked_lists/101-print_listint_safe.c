#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *tmp;
	listp_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((tmp = c) != NULL)
		{
			c = c->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t a = 0;
	listp_t *h, *b, *s;

	h = NULL;
	while (head != NULL)
	{
		b = malloc(sizeof(listp_t));

		if (b == NULL)
			exit(98);

		b->p = (void *)head;
		b->next = h;
		h = b;

		s = h;

		while (s->next != NULL)
		{
			s = s->next;
			if (head == s->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&h);
				return (a);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		a++;
	}

	free_listp(&h);
	return (a);
}
