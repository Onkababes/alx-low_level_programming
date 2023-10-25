#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list
 * @h: pointer to the head of the list
 * Return: The size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *cur, *next;
	size_t cou = 0;

	if (h == NULL || *h == NULL)
		return (0);

	cur = *h;

	while (cur != NULL)
	{
		next = cur->next;
		free(cur);
		cou++;

		if (next >= cur)
		{
			*h = NULL;
			return (cou);
		}

		cur = next;
	}

	*h = NULL;
	return (cou);
}
