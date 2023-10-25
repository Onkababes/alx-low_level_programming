#include "lists.h"

/**
 * let_listp - function that frees a list
 * @head: pointer
 * Return: nothing
 */

void let_listp(listp_t **head)
{
	listp_t *limi, *now;

	if (head != NULL)
	{
		now = *head;
		while ((limi = now) != NULL)
		{
			now = now->next;
			free(limi);
		}

		*head = NULL;
	}
}

/**
 * free_listint_safe- function that frees the list
 * @h: the pointer
 * Return: results
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *on, *lin, *nch, *tl;

	on = NULL;
	while (h != NULL)
	{
		nch = malloc(sizeof(listp_t));

		if (nch == NULL)
			exit(98);

		nch->p = (void *)h;
		new->next = on;
		on = nch;
		tl = on;

		while (tl->next != NULL)
		{
			tl = tl->next;
			if (h == tl->p)
			{
				printf("-> [%p] %d\n", (void *)h, h->n);
				free(listp_t(&on);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *));
		h = h->next;
		nodes++;
	}
	free_listp(&on);
	return (nodes);
}
