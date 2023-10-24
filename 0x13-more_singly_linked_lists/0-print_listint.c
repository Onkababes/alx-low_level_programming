#include "lists.h"
#include <stdio.h>

/**
 * print_listint - funtion that prints all the elements
 * @h: the head of the function
 * Return: the results
 */

size_t print_listint(const listint_t *h)
{
	size_t lis = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		lis++;
	}

	return (lis);
}
