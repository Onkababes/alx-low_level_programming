#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: a pointer
 * @n: the integer
 * Return: the answer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *beg;

	beg = malloc(sizeof(listint_t));
	if (beg == NULL)
		return (NULL);

	beg->n = n;
	beg->next = *head;
	*head = beg;

	return (beg);
}
