#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: whre linking begins
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *now;

	while ((now = head) != NULL)
	{
		head = head->next;
		free(now->str);
		free(now);
	}
}
