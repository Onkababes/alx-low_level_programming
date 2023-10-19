#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * @str: array
 * @head: the pointer
 * Return: results
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lis, *lim;
	unsigned int i, give = 0;

	lis = malloc(sizeof(list_t));
	if (lis == NULL)
		return (NULL);

	lis->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		give++;

	lis->len = give;
	lis->next = NULL;
	lim = *head;

	if (lim == NULL)
		*head = lis;
	else
	{
		while (lim->next != NULL)
			lim = lim->next;
		lim->next = lis;
	}
	return (*head);

}
