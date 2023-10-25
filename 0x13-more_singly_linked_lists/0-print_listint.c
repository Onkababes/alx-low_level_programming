#include "lists.h"

/**
 * print_listint - function that all the elements in a list
 * @h: the to pointer
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counts = 0;

	while (h)
	{

		counts++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (counts);
}

