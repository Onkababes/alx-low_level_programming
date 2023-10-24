#include "lists.h"

/**
 * pop_listint - function that deletes the node
 * @head: a pointer
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *rem;
	int a;

	if (head == NULL || *head == NULL)
		return (0);
	rem = *head;
	*head = rem->next;
	a = rem->n;
	free(rem);
	return (a);
}
