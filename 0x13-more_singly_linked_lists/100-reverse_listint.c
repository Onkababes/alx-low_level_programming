#include "lists.h"

/**
 * reverse_listint - function that reverse a linked list
 * @head: the pointer
 * Return: results
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *lord, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	lord = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = lord;
		lord = *head;
		*head = next;
	}
	*head = lord;
	return (*head);
}
