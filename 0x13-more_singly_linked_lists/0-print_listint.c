#include "lists.h"

/**
 * print_listint - funtion that prints all the elements
 * @h: the head of the function
 * Return: nothing
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
