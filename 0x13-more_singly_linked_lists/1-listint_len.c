#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: the head
 * Return: the results
 */

size_t listint_len(const listint_t *h)
{
	size_t list = 0;

	while (h)
	{
		list++;
		h = h->next;
	}

	return (list);
}
