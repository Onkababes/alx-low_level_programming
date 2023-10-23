#include "lists.h"

/**
 * free_listint2 - function that frees the list
 * @head: the pointer
 * Return: the answer
 */

void free_listint2(listint_t **head)
{
	listint_t *lim;

	if (head == NULL)
		return;


	while (*head)
	{
		lim = (*head)->next;
		free(*head);
		*head = lim;
	}

	head = NULL;
}
