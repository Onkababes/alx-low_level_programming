#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the nodes at index
 * @head: the pointer
 * @index:  is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int t;
	listint_t *limi, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	limi = *head;
	for (t = 0; t < index - 1; t++)
	{
		if (limi->next == NULL)
			return (-1);
		limi = limi->next;
	}
	next = limi->next;
	limi->next = next->next;
	free(next);
	return (1);
}
