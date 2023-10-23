#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: the pointer
 * Return: the results
 */

void free_listint(listint_t *head)
{
	listint_t *lim;

	while (head)
	{
		lim = head->next;
		free(head);
		head = lim;
	}
}
