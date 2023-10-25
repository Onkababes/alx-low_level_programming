#include "lists.h"

/**
 * free_listp - function that frees a linked list
 * @head: the first pointer
 * Return: nothing
 */
void free_listp(listp_t **head)
{
	listp_t *lim;
	listp_t *now;

	if (head != NULL)
	{
		now = *head;
		while ((lim = now) != NULL)
		{
			now = now->next;
			free(lim);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - function that print a linked list
 * @head: first pointer
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr, *cur, *sum;

	hptr = NULL;
	while (head != NULL)
	{
		cur = malloc(sizeof(listp_t));

		if (cur == NULL)
			exit(98);

		cur->p = (void *)head;
		cur->next = hptr;
		hptr = cur;

		sum = hptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&hptr);
	return (nnodes);
}
