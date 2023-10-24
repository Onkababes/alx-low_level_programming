#include "lists.h"

/**
 * get_nodeint_at_index - function that returns nths node of the linked list
 * @head: the pointer
 * @index: index of the node statring with 0
 * Return: nothing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b;

	if (head == NULL)
		return (NULL);
	for (b = 0; b < index; b++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
