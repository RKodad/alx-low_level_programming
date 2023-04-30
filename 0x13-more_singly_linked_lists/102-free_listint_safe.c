#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((tmp = curr) != NULL)
		{
			c = c->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @g: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t a = 0;
	listp_t *h, *b, *s;
	listint_t *c;

	h = NULL;
	while (*g != NULL)
	{
		b = malloc(sizeof(listp_t));

		if (b == NULL)
			exit(98);

		b->p = (void *)*g;
		b->next = h;
		h = b;

		s = h;

		while (s->next != NULL)
		{
			s = s->next;
			if (*g == s->p)
			{
				*g = NULL;
				free_listp2(&h);
				return (a);
			}
		}

		c = *g;
		*g = (*g)->next;
		free(c);
		a++;
	}

	*g = NULL;
	free_listp2(&h);
	return (a);
}
