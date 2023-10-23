#include "lists.h"

/**
 * add_nodeint_end - function that add a new node at the end
 * @head: the pointer
 * @n: an integer
 * Return: the answer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *beg, *end;

	beg = malloc(sizeof(listint_t));
	if (beg == NULL)
		return (NULL);

	beg->n = n;
	beg->next = NULL;

	if (*head == NULL)
		*head = beg;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = beg;
	}

	return (*head);
}
