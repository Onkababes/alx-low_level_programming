#include "lists.h"

/**
 * insert_nodeint_at_index - the function that inserts a new node
 * @head: the pointer
 * @n: an integer
 * @idx: the index of the list where the new node should be added.
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int t;
	listint_t *lim, *cur;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		lim = *head;
		for (t = 0; t < idx - 1 && lim != NULL; t++)
		{
			lim = lim->next;
		}
		if (lim == NULL)
			return (NULL);
	}
	cur = malloc(sizeof(listint_t));
	if (cur == NULL)
		return (NULL);
	cur->n = n;
	if (idx == 0)
	{
		cur->next = *head;
		*head = cur;
		return (cur);
	}
	cur->next = lim->next;
	lim->next = cur;
	return (cur);
}
