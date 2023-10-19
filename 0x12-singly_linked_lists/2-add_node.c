#include "lists.h"

/**
 * add_node - function that add a new node at the beginning
 * @head: the head
 * @str: the string
 * Return: the results
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int siz = 0;


	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[siz])
		siz++;

	temp->len = siz;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
